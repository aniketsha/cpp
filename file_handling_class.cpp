#include<iostream>
#include<fstream>
using namespace std;
class file{	
	public:
		string name;
		int roll;
		file(string name="",int roll =0):name(name),roll(roll){
		}
		void input()
		{
			cout<<"\nenter a name\n";
			cin>>name;
			cout<<"\nenter roll no\n";
			cin>>roll;
		}
		void output()
		{
			ofstream fout("PR3.txt",ios::app);
			fout<<name<<"\n"<<roll<<"\n";
			fout.close();
		}
		void display()
		{
			cout<<name<<"\n"<<roll<<"\n";
		}
		friend void read();
};
void read()
{
	file f;
	ifstream fin("PR3.txt");
	while(fin>>f.name>>f.roll)
	{
		f.display();
	}
}
main()
{
	file f;
	f.input();
	f.output();
	cout<<"\ndone for object 1";
	file d;
	d.input();
	d.output();
	cout<<"\ndone for object 2\n";
	read();
}
