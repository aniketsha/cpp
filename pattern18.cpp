#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for (int i=5;i>=1;i--)
    {
        for(int k=5-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
}
