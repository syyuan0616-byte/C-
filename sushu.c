#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		if(a==i) 
		{
			printf("yes");
			break;
		}
		if(a%i==0) 
		{
			printf("no");
			break;
		}
	}
}