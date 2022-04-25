#include <iostream>
#include <fstream>
#include "test1.h"
using namespace std;
typedef struct detail{
	string menu[4]={"1.Add","2.Delete","3.Update","4.Show"};
}details;
//void updatation(const char* file1,const char* file2)
//{
//	remove(file2);
//	rename(file1,file2);
//}
void add()
{
	string name;
	fstream fout("demo.txt",ios::out|ios::app);
	cout<<"enter a name: ";
	cin>>name;
	fout<<name<<"\n";
	fout.close();
	fstream fout2("demo2.txt",ios::out|ios::app);
	fout2<<name<<"\n";
	fout2.close();	
}
//void run()
//{
//		updatation("demo2.txt","demo.txt");
//}
void del()
{
	int n=0;
	string name,cut;
	fstream fout2("demo2.txt",ios::out);
	fstream fin("demo.txt",ios::in);
	cout<<"enter a name u wanna delete: ";
	cin>>cut;
	while(fin>>name)
	{
		if(cut!=name)
			fout2<<name<<"\n";
		else
		{
			n=fin.tellp();
			//cout<<"\n"<<n<<"\n";
		}
	}
	if(n==0)
	{
		cout<<"ERROR: name is not available\n ";
	}
//	updatation("demo2.txt","demo.txt");
	fout2.close();
	fin.close();
}
void update()
{
	int n=0;
	string name,name2,name3;
	cout<<"enter a name u wanna update: ";
	cin>>name2;
	cout<<"enter the updated name: ";
	cin>>name3;
	fstream fin("demo.txt",ios::in);
	fstream fout2("demo2.txt",ios::out);
	while(fin>>name)
	{
		if(name==name2)
		{
			fout2<<name3<<"\n";
			n=fin.tellp();
		}
		else
		{
			fout2<<name<<"\n";
		}
	}
	if(n==0)
	{
		cout<<"ERROR: name is not available\n ";
	}
//	updatation("demo.txt","demo1.txt");
	fout2.close();
	fin.close();
}
void show()
{
	int n=0;
	string name;
	fstream fin("demo.txt",ios::in);
	cout<<"\tNAMES\n";
	while(fin>>name)
	{
		cout<<++n<<". "<<name<<"\n";
	}
}
void select()
{
	int n;
	cout<<"what do u wanna do? ";
	cin>>n;
	switch(n)
	{
		case 1:
			add();
			break;
		case 2:
			show();
			del();
			updatation("demo2.txt","demo.txt");
			break;
		case 3:
			show();
			update();
			updatation("demo2.txt","demo.txt");	
			break;
		case 4:
			show();
			break;
		default:
			cout<<"choose a write number";
	}
}
main()
{
	string con;
	do
	{
		details d;
		for(int i=0;i<4;i++)
		{
			cout<<d.menu[i]<<"\n";		
		}
		select();
		cout<<"do u wanna continue: ";
		cin>>con;
	}
	while(con=="y" || con=="Y");
	//add();
	//del();
	//update();
}
