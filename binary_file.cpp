#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;
void updatation(const char* file1,const char* file2)
{
//	remove(file1);
	rename(file1,file2);
}
class stud{
	char name[20];
	public:
		stud(char *name="")
		{
			strcpy(name,name);
		}
		void display()
		{	
			cout<<name<<"\n";
		}
};
main()
{
	stud s("aniket");
	fstream fout("student1.dat",ios::out|ios::binary);
	fout.write((char*)&s,sizeof(s));
	fout.close();
	fstream fin("student1.dat",ios::in|ios::binary);
	fin.read((char*)&s,sizeof(s));
	s.display();
	if((rename("student1.dat","00_1.dat")!=0))
		cout<<"rename success ";
	else
		cout<<"ERROR";
	getch();
}
