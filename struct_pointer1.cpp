#include <iostream>
using namespace std;
struct student
{
	int rollno;
	string name;
};
struct student input(struct student *p)
{
	cout<<"enter name and roll no\n";
	cin>>p->name>>p->rollno;
	return *p;
}
void output(struct student *p)
{
	cout<<" \nname :"<<p->name;
	cout<<"\n roll no: "<<p->rollno;
}
main()
{
	struct student s;
	struct student *p;
	p=&s;
	input(p);
	output(p);
}
