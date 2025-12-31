#include<stdio.h>
#include<string.h>
int main()
{
	char chuan[30];
	gets(chuan);
	int n=strlen(chuan);
	if(n==1)
	{
		puts(chuan);
		return 0;
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<n;j++) printf("%c",chuan[j]);
		for(int j=0;j<i;j++) printf("%c",chuan[j]);
		printf("\n");
	}
}