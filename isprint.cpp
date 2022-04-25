#include<stdio.h>
#include<ctype.h>
int main()
{
	int n=0;
	char s[]="ani\nket";
	int d=strlen(s);
	for(int n=0;n<d;n++)
	{
		if(isprint(s))
			printf("%s",&s[n]);
		else
			break;
	}
}
