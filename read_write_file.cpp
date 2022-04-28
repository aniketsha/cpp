#include<iostream>
#include <fstream>
using namespace std;
struct student 
{
	string name;
	int roll;
	int classes;
};
void input()
{
	struct student s;
	ofstream fout("PR3.txt");
	cout<<"enter name , rollno and class \n";
	cin>>s.name>>s.roll>>s.classes;
	fout<<s.name<<"\n"<<s.roll<<"\n"<<s.classes;
	fout.close();
}
void output()
{
	struct student s;
	ifstream fin("PR3.txt");
	fin>>s.name;
	cout<<"name :"<<s.name<<"\n";
	fin>>s.roll;
	cout<<"roll no : "<<s.roll<<"\n";
	fin>>s.classes;
	cout<<"class : "<<s.classes;
}
main()
{
	input();
	output();
}
