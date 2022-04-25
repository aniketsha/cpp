#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
main()
{
	int roll;char name[25],ch;float marks;
	ofstream fout;
	fout.open("demo.txt");
	do{
		cout<<"\nenter roll: ";
		cin>>roll;
		cout<<"\nenter name: ";
		cin>>name;
		cout<<"\nenter marks: ";
		cin>>marks;
		fout<<roll<<"  "<<name<<"  "<<marks<<"  ";
		cout<<"do u wanna continue: ";
		ch=getche();
	}while(ch=='y'||ch=='Y');
	cout<<"\ndone\n";
	fout.close();
	ifstream fin;
	fin.open("demo.txt");
	while(fin>>roll>>name>>marks)
	{
		cout<<"\t"<<roll<<"\t"<<name<<"\t"<<marks;
	}
	fin.close(); 
}
