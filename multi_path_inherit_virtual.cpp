#include <iostream>
using namespace std;
class a{
	public:
		int x;
		a(int x=0):x(x){
		}
		void displaya()
		{
			cout<<"im display of a\n";
		}
};
class b:public virtual a{
	protected:
		int y;
	public:
		b(int y=0):y(y){
		}
		void displayb()
		{
			cout<<"im display of b\n";
			cout<<x<<"\n";
			cout<<y<<"\n";
		}
};
class c:public virtual a{
	protected:	
		int z;
	public:
		c(int z=0):z(z){
		}
		void displayc()
		{
			cout<<"im display of c\n";
			cout<<x<<"\n";
			cout<<z<<"\n";
		}
};
class d:public b,public c{
	int l;
	//int t;
	public:
		d(int l=0,int y=0,int z=0):b(y),c(z),l(l){
		}
		void displayd()
		{
			x=12;
			cout<<"im display of d\n";
			cout<<x<<"\n";
			cout<<y<<"\n";
			cout<<z<<"\n";
			cout<<l<<"\n";
			//cout<<t<<"\n";
		}
};
main()
{
//	c obj(2,3);
//	b obj1(4,5);
//	//obj.c::displaya();
//	obj.displayc();
//	obj1.displayb();
//	obj.displaya();
	d obj2(9,7,6);
	obj2.displayd();
}

