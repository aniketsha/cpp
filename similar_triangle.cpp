#include <iostream>
using namespace std;

int similar(int a[][2],int i,int j)
{
    int c,d,counter=0;
    for(int n=0;n<i;n++)
    {
        c=n;
        for(int x=0;x<i-1;x++)
        {
            d=x;
            if(a[n][x]/a[++c][x]==a[n][++d]/a[c][d])
                counter++;
        }
    }
    cout<<counter;
}
int main()
{
    int i,j;
    cin>>i;
    int a[i][2];
    for(int n=0;n<i;n++)
    {
        for (int x=0;x<2;x++)
        {
            cin>>a[n][x];
        }
    }
    int counter=similar(a,i,j);
    //cout<<counter;
}
