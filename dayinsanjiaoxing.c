#include<stdio.h>
int main()
{
	char start;
	int n;
	char a[100][100];
	scanf("%c%d",&start,&n);
	a[0][0]=start;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n-i;j++) a[i][j]=' ';
		a[i][n-i]='\0';
	}
	a[0][0]=start;
	for(int i=1;i<n;i++)
	{
		a[0][i]=a[0][i-1]+1;
		if(a[0][i]>'9') a[0][i]='0';
	}
	for(int i=1;i<n;i++)
	{
		a[i][n-i-1]=a[i-1][n-i]+1;
		if(a[i][n-i-1]>'9') a[i][n-i-1]='0';
	}
	for(int i=n-2;i>0;i--)
	{
		a[i][0]=a[i+1][0]+1;
		if(a[i][0]>'9') a[i][0]='0';
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++) printf("%c",a[i][j]);
		printf("\n");
	}
}