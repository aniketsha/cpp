#include <iostream>
using namespace std;
#include <string.h>
#include <fstream>
//void updatation(const char* file1,const char* file2)
//{
//	//fstream fout("demo.txt",ios::out);
//	if(remove(file1))
//		cout<<"done\n";
//	else
//		cout<<"not removed\n";	
//	if (rename(file2,file1) != 0)
//		cout<<"\nfile updated\n";
//	else
//		cout<<"notupdated";
//}
//main()
//{
////	string filename1="demo.txt";
////	string filename2="demo1.txt";
//	updatation("demo.txt","demo2.txt");
//}
void show()
	{
		int n=0,a=0;
		string name;
		fstream fin("menu.txt",ios::in);
		cout<<"\tNAMES\n";
		while(fin>>name)
		{
			cout<<++n<<". "<<name<<"\n";
			a=fin.tellp();
		}
		if(a==0)
			cout<<"ERROR: file is empty \n";
	}
main()
{
	show();
}
