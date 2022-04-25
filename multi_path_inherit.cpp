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
class b:public a{
	protected:
		int y;
	public:
		b(int y=0,int x=0):a(x),y(y){
		}
		void displayb()
		{
			cout<<"im display of b\n";
			cout<<x<<"\n";
			cout<<y<<"\n";
		}
};
class c:public a{
	protected:	
		int z;
	public:
		c(int z=0,int x=0):a(x),z(z){
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
		d(int l=0,int y=0,int z=0,int x=0,int t=0):b(y,x),c(z,t),l(l){
		}
		void displayd()
		{
			cout<<"im display of d\n";
			cout<<"value of a from b "<<b::x<<"\n";
			cout<<"value of a from c "<<c::x<<"\n";
			cout<<"value of b "<<y<<"\n";
			cout<<"value of c "<<z<<"\n";
			cout<<"value of d "<<l<<"\n";
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
	d obj2(9,7,6,3,8);
	obj2.displayd();
}
