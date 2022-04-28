#include <iostream>
using namespace std;
#define debug
#define min(a,b)((a<b)?a:b)
main()
{
	int i,j;
	i=100;
	j=40;
	#ifdef debug
		cerr<<"its inside \n";
	#endif
	
	#if -1
		cerr<<"its zero \n";
	#endif
	
	cout<<"minimum number: "<<min(i,j)<<"\n";
}
