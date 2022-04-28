#include <iostream>
using namespace std;
class bank{
	public:
		//static string bankname;
		static void display()
		{
			cout<<"acoount no: 12345678";
			cout<<"\nname: ani";
		} 
};
//string bank:: bankname="SBI";
main()
{
	bank b1;
	b1.display();
	bank::display();
	//cout<<b1.bankname;
}
