#include<iostream>
using namespace std;
main()
{
	int i,x[5],n=1,y;
	for(i=0;i<5;i++)
	{
		cout<<"enter score of subject "<<n<<": ";
		cin>>x[i];
		n++;
	}
	for(i=0;i<5;i++)
	{
		y+=x[i];
	}
	cout<<"total: "<<y;
}
