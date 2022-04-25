#include <stdio.h>
#include <iostream>
using namespace std;
void foo(char *arr1,char *arr2)
{
    char *p;
    p= *arr1;
    *arr1= *arr2;
    *arr2 =p;
}
main()
{
    char *s1="dev";
    char *s2="ani";
    cout<<s1<<s2;
    foo(s1,s2);
    cout<<s1<<s2;
}
