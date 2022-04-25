#include<iostream>
using namespace std;
class rectangle{
	int l,b;
	public:
		void input()
		{
			cout<<"\nenter length: ";
			cin>>l;
			cout<<"\nenter breadth: ";
			cin>>b;
		}
		void display()
		{
			cout<<"\nlength : "<<l;
			cout<<"\nbreadth : "<<b;
		}
		void operator++()//object sending with operator
		{
			this->l+=2;
			this->b+=2;
		}
};
main()
{
	rectangle r1,r2;
	r1.input();
	++r1;
	r1.display();
	r2.input();
	r2.display();
//	rectangle r;
//	r.display(); 
}
