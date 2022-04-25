#include <iostream>
using namespace std;
 main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(5-i+1);
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
    for(int i=5;i>=1;i--)
    {
    	for(int k=5-i;k>0;k--)
    		cout<<" ";
        for(int j=1;j<=i;j++)
        {
            cout<<(5-i+1);
        }
        cout<<"\n";
    }
}


