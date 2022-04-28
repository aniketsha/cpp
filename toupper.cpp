#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () 
{	
    int i = 0;
    char c;
    char str[10];
    scanf("%s",&str);
    int n= strlen(str);
    for (int i=0;i<n;i++)
    {
        printf("%c",toupper(str[i]));
    }
   return(0);
}
