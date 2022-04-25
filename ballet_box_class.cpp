#include <iostream>
using namespace std;
class candidate{
	public:
		string name;
		int counter,id;
		candidate(string name,int id): name(name),id(id),counter(0)
		{
		}
		candidate()
		{
			cout<<"\nenter name of candidate: ";
			cin>>name;
			cout<<"\nenter id of candidate : ";
			cin>>id;
		}
		void display()
		{
			cout<<"name of candidate: "<<name<<"\n";
			cout<<"id of candidate : "<<id<<"\n";
		}
		friend void winner();
	//	class voters();
};
class voters{
	string vname;
	int vage;
	int vid;
		public:
			char c;
			void input()
			{
				cout<<"enter name of voters: ";
				cin>>vname;
				cout<<"enter age of voters : ";
				cin>>vage;
				cout<<"enter id of voters : ";
				cin>>vid;
				cout<<"candidate 1 has + symbol or charachter\n";
				cout<<"candidate 2 has - symbol or charachter \n";
			}
			void selection()
			{
				//char c;
				cout<<"select a given symbol to vote :";
				cin>>c;
			}
			friend void winner();
			friend void add();
};
void add(candidate *p, candidate *p1,voters v[],int n)
{
	int i=0;
	while(n>i)
	{
		switch(v[i].c)
		{
			case '+':
				p->counter++;
				break;
			case '-':
				p1->counter++;
				break;
		}
		i++;
	}
	//cout<<p->counter<<"\n";
	//cout<<p1->counter<<"\n";
}
void winner(candidate c,candidate c1)
{
	//cout<<c.counter<<"\n";
	//cout<<c1.counter<<"\n";
	if(c.counter>c1.counter)
	{
		cout<<"\n"<<c.name<<" winner\n";
	}
	else if(c.counter>c1.counter)
	{
		cout<<"\n"<<c1.name<<"winner\n";
	}
}
main()
{	
	candidate c;
	candidate *p;
	p=&c;
	candidate c1;
	candidate *p1;
	p1=&c1;
	c.display();
	c1.display();
	int n;
	cout<<"enter number of voters: ";
	cin>>n;
	voters v[n];
	for(int i=0;i<n;i++)
	{
		v[i].input();
		v[i].selection();
	}
	add(p,p1,v,n);
	winner(c,c1);
}
