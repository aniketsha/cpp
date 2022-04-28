#include <iostream>
#include <fstream>
using namespace std;
void updatation(const char* file1,const char* file2)
{
	remove(file2);
	rename(file1,file2);
}
class data{
	public:
//		fstream fout("menu.txt",ios::out|ios::app);	
//		fstream fout2("menu2.txt",ios::out|ios::app);
//		fstream fin2("menu2.txt",ios::in);	
//		fstream fin("menu.txt",ios::in);
		data()
		{
			string menu[4]={"1.Add","2.Delete","3.Update","4.Show"};
			for(int i=0;i<4;i++)
			{
				cout<<menu[i]<<"\n";		
			}
		}
		void add()
		{
			fstream fout("menu.txt",ios::out|ios::app);	
			string name;
			cout<<"enter a name: ";
			cin>>name;
			fout<<name<<"\n";
			fstream fout2("menu2.txt",ios::out|ios::app);
			fout.close();
			fout2<<name<<"\n";
			fout2.close();	
		}
		void del()
		{
			int n=0;
			string name,cut;
			fstream fout2("menu2.txt",ios::out);
			fstream fin("menu.txt",ios::in);
			cout<<"enter a name u wanna delete: ";
			cin>>cut;
			while(fin>>name)
			{
				if(cut!=name)
					fout2<<name<<"\n";
				else
					n=fin.tellp();
			}
			if(n==0)
				cout<<"ERROR: name is not available\n";
			fout2.close();
			fin.close();
		}
		void update()
		{
			int n=0;
			string name,name2,name3;
			cout<<"enter a name u wanna update: ";
			cin>>name2;
			cout<<"enter the updated name: ";
			cin>>name3;
			fstream fin("menu.txt",ios::in);
			fstream fout2("menu2.txt",ios::out);
			while(fin>>name)
			{
				if(name==name2)
				{
					fout2<<name3<<"\n";
					n=fout2.tellp();
				}
				else
				{
					fout2<<name<<"\n";
				}
			}
			if(n==0)
				cout<<"ERROR: name is not available\n";
			fout2.close();
			fin.close();
		}
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
		void select()
		{
			int n;
			cout<<"what do u wanna do? ";
			cin>>n;
			switch(n)
			{
				case 1:
					add();
					break;
				case 2:
					show();
					del();
					updatation("menu2.txt","menu.txt");
					break;
				case 3:
					show();
					update();
					updatation("menu2.txt","menu.txt");
					break;
				case 4:
					show();
					break;
				default:
					cout<<"choose a write number";
			}
		}
//		~data()
//		{
//			
//			fout.close();
//			fout2.close();
//			fin.close();
//		}
};

