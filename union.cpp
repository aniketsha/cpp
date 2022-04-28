#include <iostream>
using namespace std;
union student 
{
	char name[20];
	float per;
	int roll;
};
/*union student input()
{
	union student s;
	cout<<"enter name , rollno and percentage \n";
	cin>>s.name>>s.roll>>s.per;
	return s;
}
void output(union student s )
{
	cout<<" name : "<<s.name;
	cout<<"\n rollno : "<<s.roll;
	cout<<"\n percentage : "<<s.per;
}*/
main()
{
//	union student s=input();
//	output(s);
	union student s;
	cout<<sizeof(s);
	cout<<"\n enter name , rollno and percentage \n";
	cin>>s.name;
	cout<<" name : "<<s.name;
	cin>>s.roll;
	cout<<"\n roll no : "<<s.roll;
	cin>>s.per;
	cout<<"\n percentage : "<<s.per;
}
