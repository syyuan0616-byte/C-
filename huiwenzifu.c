#include<stdio.h>
#include<string.h>
int panduan(char zifu[],int i);
int main()
{
	char zifu[300];
	gets(zifu);
	if(panduan(zifu,0)==1) printf("Yes\n");
	else printf("No\n");
}
int panduan(char zifu[],int i)
{
	int n;
	n=strlen(zifu);
	if(n==0) return 1;
	if(zifu[i]==zifu[n-i-1])
	{
		if(i==n-1) return 1;
		else panduan(zifu,i+1);
	}
	else return 0;
}