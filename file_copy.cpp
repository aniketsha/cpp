#include <iostream>
#include<string.h>
using namespace std;
#include <fstream>
class student{
	string name[5];
	public:
		student()
		{}
		student(string namecopy[], int n)
		{
			for(int i=0;i<=n;i++)
			{
				name[i]=namecopy[i];
			}
		}
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout<<name[i]<<"\n";
			}
		}
		void write1(char *filename)
		{
			ofstream fout(filename);
			for(int i=0;i<5;i++)
			{
				cout<<name[i]<<"\n";
			}
			fout.close();	
		}
};
main()
{
	string name[5]={"a","n","i","k","e"};
	student s(name,5);
	s.display();
	s.write1("stud.txt");
	s.write1("studcopy.txt");
}
