#include <iostream>
using namespace std;
class bank{
	int accno,amount;
	string name;
	public:
		static string bankname;
		bank()
		{
			cout<<"enter your account no: ";
			cin>>accno;
			cout<<"\nenter your name : ";
			cin>>name;
			cout<<"\nenter amount :";
			cin>>amount;
		}
		void deposit(int dep)
		{
			amount=amount+dep;
		}
		void withdrawl(int w)
		{
			amount=amount-w;
		}
		void balance()
		{
			cout<<"\nyour current balance : "<<amount;
		}
		void display()
		{
			cout<<"\nyour info: ";
			cout<<"\n your name: "<<name;
			cout<<"\n account number: "<<accno;
			cout<<"\nyour current balance : "<<amount;
		}
		static void display1()
		{
			cout<<"\n"<<bankname;
			//cout<<"\n name"<<name;
			//cout<<"\n account number: "<<accno;
			//cout<<"\nyour current balance : "<<amount;
		}
};
string bank:: bankname="SBI";
main()
{
	bank b1;
	cout<<"\nbank name : "<<b1.bankname;
	int dep;
	cout<<"\nenter amount you wanna deposit:";
	cin>>dep;
	b1.deposit(dep);
	int w;
	cout<<"\nenter amount you wanna withdrawl :";
	cin>>w;
	b1.withdrawl(w);
	b1.balance();
	b1.display();
	bank::display1();
}
