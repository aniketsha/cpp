#include <iostream>
using namespace std;
int* input()
{
	static int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter your scores \n";
		cin>>array[i];
	}
	return array;
}
int* display(int *p)
{
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<<"\n";
	}
}
int* grace(int *p)
{
	static int grace_array[5];
	for(int i=0;i<5;i++)
	{
		if((*(p+i)>=30) && (*(p+i)<33))
		{
			grace_array[i]=33-*(p+i);
			*(p+i)=33;
		}
		else
		{
			grace_array[i]=0;
		}
	}
	return grace_array;
}
int sum(int *p)
{
	int c=0;
	for(int i=0;i<5;i++)
	{
		c+= *(p+i);
	}
	return c;
}
int percentage(int x)
{
	int d=0;
	d= (x*100) /500;
	return d;
}
main()
{
	int *p;
	p=input();
	cout<<"Initial scores \n";
	display(p);
	
	int *p1=grace(p);
	cout<<"grace scores \n";
	display(p1);
	
	int x=sum(p);
	cout<<"total scores: "<<x<<"\n";
	
	int y=percentage(x);
	cout<<"percentage: "<<y<<"% \n";
}
