#include <iostream>
using namespace std;
// function for addition of scores
int score()
{
	int a,b,c=0;
	for(a=1;a<=5;a++)
	{
		cout<<"enter your scores";
		cin>>b;
		c+=b;
	}
	return(c);
}
// fuction for calculating percentage
int per(int x)
{
	int d=0;
	return(d=(x*100)/500);
}
// function for grade
string grade(int y)
{
	if(y>90)
	return("grade : A \n");
	else if(y>80)
	return("grade : B \n");
	else if(y>70)
	return("grade : C \n");
	else
	return("Fail");
}
main()
{
	int x=score();
	cout<<"total: "<<x;
	int y=per(x);
	cout<<"\npercentage: "<<y<<" % \n";
	string q=grade(y);
	cout<<q;
}

