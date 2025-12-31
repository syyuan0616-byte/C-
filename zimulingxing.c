#include<stdio.h>
int main()
{
	int n;
	char start;
	scanf("%c,%d",&start,&n);
	char a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) a[i][j]=' ';
	}
	a[0][n-1]=start;
	for(int i=1;i<n;i++)
	{
		a[i][n-1-i]=a[i-1][n-i]+1;
		if(a[i][n-1-i]=='Z'+1) a[i][n-1-i]='A';
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) printf("%c",a[i][j]);
		for(int j=n-2;j>=n-i-1;j--) printf("%c",a[i][j]);
		printf("\n");
	}
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<n;j++) printf("%c",a[i][j]);
		for(int j=n-2;j>=n-i-1;j--) printf("%c",a[i][j]);
		printf("\n");
	}
}