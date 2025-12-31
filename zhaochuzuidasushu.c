#include<stdio.h>
int main()
{
	int a,max=2;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		int flag=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0) 
			{
				flag=0;
				break;
			}
		}
		if(flag==1) max=i;
	}
	printf("The max prime number is %d.\n",max);
}