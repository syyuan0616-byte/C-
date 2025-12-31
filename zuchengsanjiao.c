#include<stdio.h>
void bubble(int mu[],int n);
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int mu[5000];
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&mu[i]);
	}
	bubble(mu,n);
	for(int i=n-1;i>=2;)
	{
		if(mu[i-2]+mu[i-1]>mu[i])
		{
			count++;
			i-=3;
		}
		else i-=1;
	}
	printf("%d\n",count);
}
void bubble(int mu[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(mu[j]>mu[j+1])
			{
				int k=mu[j];
				mu[j]=mu[j+1];
				mu[j+1]=k;
			}
		}
	}
}