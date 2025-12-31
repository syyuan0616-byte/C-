#include<stdio.h>
int main()
{
	int h;
	scanf("%d",&h);
	for(int i=1;i<=h;i++)
	{
		if(i==1)
		{
			for(int j=1;j<=2*h-1;j++) printf("*");
			printf("\n");
		}
		else if(i==h)
		{
			for(int j=1;j<=i-1;j++) printf(" ");
			printf("*");
			printf("\n");
		}
		else 
		{
			for(int j=1;j<=i-1;j++) printf(" ");
			printf("*");
			for(int j=1;j<=(h-i)*2-1;j++) printf(" ");
			printf("*");
			printf("\n");
		}
	}
}