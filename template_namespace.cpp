#include <iostream>
using namespace std;
template <class t>
class calculate{
	t a,b;
	//t b;
	public:
		calculate(t a=0,t b=0):a(a),b(b){
		}
		void sum()
		{
			t c=a+b;
			cout<<c<<"\n";
		}
};
//using namespace integer;
main()
{
	calculate<int> c(2,3);
	c.sum();
	calculate<double> d(2.63,3.41);
	d.sum();
}
