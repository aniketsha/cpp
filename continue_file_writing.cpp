#include <iostream>
#include <fstream>
using namespace std;
class info{
	int id;
	int roll;
	public:
		info()
		{
			id=1;
			roll=2;
		}
		info(int id,int roll):id(id),roll(roll)
		{
		}
		void display()
		{
			cout<<"\nid: "<<id;
			cout<<"\nroll no: "<<roll;
		}
};
main()
{
	char c;
	ofstream fout("students.dat",ios::binary|ios::app);
	do
	{
		int roll,id;
		cout<<"enter your id: ";
		cin>>id;
		cout<<"enter your rollno: ";
		cin>>roll;
		info s(id,roll);
		fout.write((char*)&s,sizeof(s));
		cout<<"\ndo u wanna continue: ";
		cin>>c;
	}
	while(c=='y');
	fout.close();
	ifstream fin("students.dat",ios::binary);
	info s1;
	while(fin.read((char*)&s1,sizeof(s1)))
	{
		s1.display();	
	}
}
