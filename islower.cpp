#include <stdio.h>
#include <ctype.h>
int main()
{
	char str[10];
	scanf("%s",&str);
	for(int n=0;n<10;n++)
	{
		if (islower(str[n]))
			printf("%c",str[n]);
	}
}
