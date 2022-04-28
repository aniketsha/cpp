#include <iostream>
using namespace std;
struct student 
{
	int rollno;
	string name;
	
	void input()
	{
		cout<<"enter name and roll no\n";
		cin>>name>>rollno;
	}
	void output()
	{
		cout<<" \nname :"<<name;
		cout<<"\n roll no: "<<rollno;
	}
};
main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	ptr->input();
	ptr->output();
}
