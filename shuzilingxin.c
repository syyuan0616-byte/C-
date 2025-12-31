#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*(n-i)-1;j++) printf(" ");
		for(int j=n;j>=n-i+1;j--) 
		{
			if(n>=10) printf("%2d",j);
			else printf("%2d",j);
		}
		printf(" ");
		if(i>1)
		{
			for(int j=n-i+2;j<=n;j++) 
			{
				if(n>=10) printf("%-2d",j);
				else printf("%-2d",j);
			}
		}
		printf("\n");
	}

	for(int i=n+1;i<=2*n-1;i++)
	{
		for(int j=1;j<=2*(i-n);j++) printf(" ");
		for(int j=n;j>=i-n+1;j--) 
		{
			if(n>=10) printf("%2d",j);
			else printf("%2d",j);
		}
		printf(" ");
		for(int j=i-n+2;j<=n;j++) 
		{
			if(n>=10) printf("%-2d",j);
			else printf("%-2d",j);
		}
		printf("\n");
	}
}