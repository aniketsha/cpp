#include <iostream>
using namespace std;
class student{
	string name;
	int roll;
	public:
		void input()
		{
			cout<<"enter name and roll no : \n";
			cin>>name;
			cin>>roll;
		}
		void output()
		{
			cout<<"\n name : "<<name;
			cout<<"\n roll no : "<<roll<<"\n";
		}
};
main()
{
	student s;
	for(int a=1;;)
	{
		string i;
		s.input();
		s.output();
		cout<<"\ndo u wanna continue\n";
		cin>>i;
		if(i=="no")
		{
			break;
		}
	}
}
