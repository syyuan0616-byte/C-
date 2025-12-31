#include<stdio.h>
int main()
{
	int n;
	int a[100][100];
	a[0][0]=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(i==0&&j==0) a[i][j]=1;
			else if(i==0&&j%2!=0) a[i][j]=a[i][j-1]+1;
			else if(i==0&&j%2==0) a[i][j]=a[i][j-1]+2*j;
			else if((i+j)%2!=0) a[i][j]=a[i-1][j+1]+1;
			else a[i][j]=a[i-1][j+1]-1;
		}
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=n-i;j<n;j++)
		{
			if(i==n-1&&j%2==0) a[i][j]=a[i][j-1]+1;
			else if(i==n-1&&n==2) a[i][j]=a[i][j-1]+1;
			else if(i==n-1&&j%2!=0) a[i][j]=a[i][j-1]+(n-j)*2;
			else if((i+j)%2==0) a[i][j]=a[i+1][j-1]+1;
			else a[i][j]=a[i+1][j-1]-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==n-1&&a[i][j]<10) printf(" %d",a[i][j]);
			else if(j==n-1&&a[i][j]>=10) printf("%d",a[i][j]);
			else if(a[i][j]<10) printf(" %d ",a[i][j]);
			else if(a[i][j]>=10) printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}