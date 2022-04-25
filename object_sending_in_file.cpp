#include <iostream>
#include <fstream>
#include <conio.h>
#include<string.h>
using namespace std;
class student{
	int roll;
	char name[20];
	public:
		student(int roll=0,char *n=""):roll(roll){
			strcpy(name,n);
		}
		void display()
		{
			cout<<"\nstudent name: "<<name;
			cout<<"\nstudent rollno: "<<roll;
		}
};
void write(student s,student s1)
{
	ofstream fout("student.dat",ios::binary|ios::app);
	fout.write((char*)&s,sizeof(s));
	fout.write((char*)&s1,sizeof(s1));
	fout.close();
	cout<<"\n everything is done \n";
}
void read(student s1)
{
	ifstream fin("student.dat",ios::binary);
	while(fin.read((char*)&s1,sizeof(s1)))
	{	
		s1.display();
	}
}
main()
{
	student s(1,"ANI");
	student s1(2,"dev");
	write(s,s1);
	read(s1);
	//s.display();	
	cout<<"\ndone";
	getch();
} 
