#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,4,5,6,7};
    int sum=12,c=0,i,j;
    for(int i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i != j)
            {
                c=a[i]+a[j];
            }
            if(c==sum)
                break;
        }
        if(c==sum)
	    {
	        cout<<a[i]<<" "<<a[j];
	  	    break;
	    }
    }  
}

