#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char str[10];
	scanf("%s",&str);
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(isdigit(str[i]))
			printf("%c",str[i]);
	}
}
