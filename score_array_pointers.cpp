#include <iostream>
using namespace std;
int* input()
{
	static int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter your numbers ";
		cin>>array[i];
	}
	return array;
}
void display(int *p)
{
	for(int i =0; i<5; i++)
	{
		cout<<*(p+i)<<"\n";
	}
}
int* array(int *p)
{
	int n=0,d=0;
	for(int i=0; i<5; i++)
	{
		if((*(p+i)>=30) && (*(p+i)<33))
		{
			*(p+i)= 33;
		}
	}
	return p;
}
int* grace (int *p)
{
	static int array[5];
	for(int i=0; i<5; i++)
	{
		if((*(p+i)>=30) && (*(p+i)<33))
		{
			array[i]= 33-(*(p+i));		
		}
		else
			array[i]=0;
	}
	return array;
}
int sum(int *p)
{
	int n=0;
	for(int i=0;i<5;i++)
	{
		if(*(p+i)>=33)
		{
			n+= *(p+i);
		}
	}
	cout<<"total: ";
	return n;
}
int percentage(int x)
{
	int d=0;
	d = (x*100)/500 ;
	return d;
}
main()
{
	int *p;
	p=input();
	display(p);
	
	int *p1;
	p1=grace(p);
	cout<<"grace scores \n";
	display(p1);
	
	int *p2;
	p2=array(p);
	cout<<"new scores \n";
	display(p2);
	
	int x=sum(p2);
	cout<<x<<"\n";
	
	int y=percentage(x);
	cout<<"percentage : "<<y<<"% \n";
}
