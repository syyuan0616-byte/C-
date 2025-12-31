#include<stdio.h>
void bubble(int a[],int i);
int main()
{
	int n,n1,i=0,nnew=0;
	scanf("%d",&n);
	int a[10];
	n1=n;
	for(;n1>0;i++)
	{
		a[i]=n1%10;
		n1=(n1-a[i])/10;
	}
	bubble(a,i);
	for(int l=0;l<i;l++)
	{
		nnew=nnew*10+a[l];
	}
	printf("%d\n",nnew);
}
void bubble(int a[],int i)
{
	for(int j=0;j<i-1;j++)
	{
		for(int m=0;m<i-j-1;m++)
		{
			int k;
			if(a[m]<a[m+1])
			{
				k=a[m];
				a[m]=a[m+1];
				a[m+1]=k;
			}
		}
	}
}