#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
	//int n=0;
	char s[]="ani\nket";
	int d=strlen(s);
	for(int n=0;n<d;n++)
	{
		if(!iscntrl(s[n]))
			printf("%c",s[n]);
		else
			break;
	}
}
