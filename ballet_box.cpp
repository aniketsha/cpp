#include <iostream>
using namespace std ;
typedef struct candidates
{
	string cand;
	int age;
	string symbol;
}CAN; 
typedef struct voters
{
	string voters;
	int age;
}VOT;
void inputc()
{
	//int n;
	//cout<<"enter number of candidates: ";
	//cin>>n;
	CAN v[2];
	v[0].cand="dev";
	v[1].cand="dev2";
	v[0].age=78;
	v[1].age=66;
	v[0].symbol="flower";
	v[1].symbol="clouds";
	/*for(int i=0;i<n; i++)
	{
		cout<<"enter name of candidate: ";
		cin>>v[i].cand;
		cout<<"enter age of candidate : ";
		cin>>v[i].age;
		cout<<"enter symbol of candidate: ";
		cin>>v[i].symbol;
	}*/
}
void inputv()
{
	int n;
	char c;
	cout<<"enter number of voters: ";
	cin>>n;
	VOT v[n];
	for(int i=0;i<n; i++)
	{
		cout<<"enter name of voters: ";
		cin>>v[i].voters;
		cout<<"enter age of voters : ";
		cin>>v[i].age;
		cout<<"select a candidate: ";
		cin>>c;
		switch(c)
		{
			case '+':
				d++;
			case '-':
				s++;
		}
	}
}
void winner()
/*void select()
{
	char c;
	cout<<"select a candidate: ";
	cin>>c;
	switch(c)
	{
		case '+':
			
		
	}
}*/
main()
{
	inputc();
	inputv();
}
