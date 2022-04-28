#include <iostream>
using namespace std;
template <class t>
class calculate{
	t a;
	t b;
	public:
		calculate(t a=0,t b=0):a(a),b(b){
		}
		void sum()
		{
			t c=a+b;
			cout<<c<<"\n";
		}
};
main()
{
	calculate<int> c(2,3);
	c.sum();
	calculate<float> d(3.56f,2.77f);
	d.sum();
	calculate<double> e(1.5623,3.77698);
	e.sum();
}
