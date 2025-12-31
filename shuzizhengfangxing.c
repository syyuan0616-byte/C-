#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a*a;i++)
	{
		if(i<10)
		{
			if(i%a!=0) printf("  %d",i);
			else printf("  %d\n",i);
		}
		if(i>=10)
		{
			if(i%a!=0) printf(" %d",i);
			else printf(" %d\n",i);
		}
	}
}