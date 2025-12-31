#include<stdio.h>
void bubble(int count,int wei[]);
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int wei[100];
	int n1=n;
	for(int i=10;i/10<n;i*=10)
	{
		wei[count]=n1%i/(i/10);
		n1-=wei[i/10-1]*(i/10);
		count++;
	}
	bubble(count,wei);
	n1=0;
	int quan=1;
	for(int i=count-1;i>=0;i--) 
	{
		n1+=wei[i]*quan;
		quan*=10;
	}
	printf("%d\n",n1);
}
void bubble(int count,int wei[])
{
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-i-1;j++)
		{
			if(wei[j]<wei[j+1])
			{
				int k;
				k=wei[j];
				wei[j]=wei[j+1];
				wei[j+1]=k;
			}
		}
	}
}