#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n!=10)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=2*(n-i);j++) printf(" ");
			for(int j=n;j>=n-i+1;j--)  printf("%-2d",j);
			for(int j=n-i+2;j<=n;j++) printf("%-2d",j);
			printf("\n");
		}
		for(int i=n+1;i<=2*n-1;i++)
		{
			for(int j=1;j<=2*(i-n);j++) printf(" ");
			for(int j=n;j>=i-n+1;j--) printf("%-2d",j);
			for(int j=i-n+2;j<=n;j++) printf("%-2d",j);
			printf("\n");
		}
	}
	else 
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=2*(n-i);j++) printf(" ");
			for(int j=n;j>=n-i+1;j--) printf("%2d",j);
			if(i!=1)printf(" ");
			if(i>1)
			{
				for(int j=n-i+2;j<=n;j++) printf("%-2d",j);
			}
			printf("\n");
		}

		for(int i=n+1;i<=2*n-1;i++)
		{
			for(int j=1;j<=2*(i-n);j++) printf(" ");
			for(int j=n;j>=i-n+1;j--) printf("%2d",j);
			if(i!=2*n-1)printf(" ");
			for(int j=i-n+2;j<=n;j++) printf("%-2d",j);
			printf("\n");
		}
	}
}