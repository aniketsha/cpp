#include <iostream>
using namespace std;
void grace(int *p1, int *p2, int *p3, int *p4, int *p5)
{
	if(*p1>30 && *p1<33)
	{
		*p1=33;
		cout<<"new score of a"<<*p1;
	}
	if(*p2>30 && *p2<33)
	{
		*p2=33;
		cout<<"new score of b"<<*p2;
	}
	if(*p3>30 && *p3<33)
	{
		*p3=33;
		cout<<"new score of c"<<*p3;
	}
	if(*p4>30 && *p4<33)
	{
		*p4=33;
		cout<<"new score of d"<<*p4;
	}
	if(*p5>30 && *p5<33)
	{
		*p5=33;
		cout<<"new score of e"<<*p5;
	}
}
int sum(int a, int b, int c, int d, int e)
{
	int s=0;
	if(a>33)
		s+=a;
	if(b>33)
		s+=b;
	if(c>33)
		s+=c;
	if(d>33)
		s+=d;
	if(e>33)
		s+=e;
	cout<<"\n";
	return(s);
}
main()
{
	int a,b,c,d,e;
	cout<<"enter score of 1st subject"<<"\n";
	cin>>a;
	cout<<"enter score of 2nd subject"<<"\n";
	cin>>b;
	cout<<"enter score of 3rd subject"<<"\n";
	cin>>c;
	cout<<"enter score of 4th subject"<<"\n";
	cin>>d;
	cout<<"enter score of 5th subject"<<"\n";
	cin>>e;
	grace(&a,&b,&c,&d,&e);
	cout<<"\nscores\n"<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e;
	int x=sum(a,b,c,d,e);
	cout<<"\n"<<x;
}
