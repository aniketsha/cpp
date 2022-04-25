#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class A{
	string name;
	int roll;
	public:
// constructor and destructor are called automatically,
		//once the object is instantiated
		fstream fout;
		fstream fin;
		A()
		{
			fout.open("1.dat",ios::out|ios::binary);
			fin.open("1.dat",ios::in|ios::app|ios::binary);
			cout << "Constructor in use" << endl;
			cout<<"enter a name: ";
			cin>>name;
			cout<<"enter roll no: ";
			cin>>roll;
		}
		void write()
		{
			fout<<"Welcome To PR3 Institute\n";
			fout<<name<<"\n";
			fout<<roll<<"\n";
		}
		void read()
		{
			fin>>name;
			cout<<"\n";
			fin>>roll;
		}
		~A()
		{
			cout<<name<<"\n";
			cout<<roll<<"\n";
		//cout << "Destructor in use" << endl;
		fout.close();
		}
};
int main()
{
	A a;
	a.write();
	a.read();
	A b;	
	b.write();
	b.read();
	return 0;
}
