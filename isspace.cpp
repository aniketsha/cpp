#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char str[]="ani k\ne\tt";
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(isspace(str[i]))
			printf("%d %c",i,str[i]);
	}
}
