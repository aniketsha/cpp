#include <iostream>
using namespace std;
class candidate{
	public:
		string name;
		int id,counter;
		char symbol;
		candidate(string name="",int id=0): name(name),id(id),counter(0)
		{
		}
		void inputc()
		{
			cout<<"enter name of candidate: ";
			cin>>name;
			cout<<"enter the id of candidate: ";
			cin>>id;
			cout<<"choose any sybmol: ";
			cin>>symbol;
			cout<<"\n";
			
		}
		friend void winning();
};
class voters{
	public:
		string vname;
		int vage;
		int vid;
		char c;
			void input()
			{
				cout<<"enter name of voters: ";
				cin>>vname;
				cout<<"enter age of voters : ";
				cin>>vage;
			}
};
void voting(int n,candidate cand[])
{
	char vote;
	cout<<"select a given symbol to vote: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<cand[i].symbol<<"\t";
	}
	cout<<"\n";
	cout<<"vote here ---> ";
	cin>>vote;
	for(int i=0;i<n;i++)
	{
		if(vote==cand[i].symbol)
		{
			cand[i].counter++;
		}
	}
}
void wining(int n,candidate cand[])
{
	int x=0;
	int loc=0;
	x=cand[0].counter;
	for(int i=0;i<n;i++)
	{
		if(cand[i].counter>x)
		{
			loc=i;
			x=cand[i].counter;
		}
	}
	cout<<cand[loc].name<<" is winner ";
		
	
//	{
//		//cout<<cand[i].name<<"\t"<<cand[i].counter<<"\n";
//		if(cand[i].counter>cand[i++].counter)
//		{
//			x=cand[i++].counter;
//			cand[i++].counter=cand[i].counter;
//			cand[i].counter=cand[i++].counter;	
//		}	
//	}
//	cout<<cand[n].name<<" is winner\n";	
}
main()
{
	int n,x;
	cout<<"enter the number of candidates: ";
	cin>>n;
	candidate cand[n];
	for(int i=0;i<n;i++)
	{
		cand[i].inputc();
	}
	cout<<"enter the number of voters: ";
	cin>>x;
	voters v[x];
	for(int i=0;i<x;i++)
	{
		v[i].input();
		voting(n,cand);
	}
	wining(n,cand);
}
