#include <iostream>
using namespace std;
class rectangle{
	int l;
	int b;
	public:
		void input()
		{
			cout<<"\nenter length :";
			cin>>l;
			cout<<"\nenter breadth :";
			cin>>b;
		}
		void display()
		{
			cout<<"\n length :"<<l;
			cout<<"\n breath :"<<b;
		}
		//friend rectangle sum(rectangle r1, rectangle r2);
		rectangle sum( rectangle r2)
		{
			rectangle r;
			r.l=this->l+r2.l;
			r.b=this->b+r2.b;
			return r;
		}
};

main()
{
	rectangle r1;
	r1.input();
	r1.display();
	rectangle r2;
	r2.input();
	r2.display();
	rectangle r;
	//r=r1+r2;
	r=r1.sum(r2);//object sending with member function
	r.display();
}
