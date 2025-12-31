#include<stdio.h>
int main()
{
	int a,n=1,count1,count2,wei,count3,count4=0;
	scanf("%d",&a);
	if(a==1) printf("1\n");
	for(int i=1;i<=a;i++)
	{
		n*=10;
	}
	for (int i=n/10+1;i<n;i++)
	{
		count1=i;
		count3=i;
		for(int j=1;j<=a;j++)
		{
			count2=1;
			wei=count3%10;
			for(int k=1;k<=a;k++)
			{
				count2*=wei;
			}
			count1-=count2;
			count3/=10;
		}
		if(count1==0) 
		{
			printf("%d\n",i);
			count4=1;
		}
	}
	if(count4==0) printf("No output.\n");
	return 0;
}