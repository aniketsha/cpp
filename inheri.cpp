#include <iostream>
using namespace std;
class parent{
	public:
		string namep;
		parent(string namep=""):namep(namep){
		}
		void displayp()
		{
			cout<<"parent name: "<<namep<<"\n";
		}
};
class child:public parent{
	public:
		string namec;
		child(string namep,string namec=""):parent(namep),namec(namec){
		}
		void displayc()
		{
			cout<<"parent name: "<<namep<<"\n";
			cout<<"child name: "<<namec<<"\n";
		}
};
main()
{
	child q("abc","dev");
	q.displayc();
}
