#include<iostream>
using namespace std;
 
int sum(int *a,int n)
{
    int add;
    for(int i=0;i<n;i++)
    {
        add+=(*(a+i));
        cout<<add<<"\n";
    }
    return add;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *a=arr[];
    int x=sum(&a,n);
    cout<<"total"<<x;
    return 0;
}
