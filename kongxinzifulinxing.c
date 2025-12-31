#include<stdio.h>
int main()
{
	char fig;
	int n;
	scanf("%c%d",&fig,&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++) printf(" ");
		printf("%c",fig+i-1);
		if(i>1) 
		{
			for(int j=1;j<=2*i-3;j++) printf(" ");
			printf("%c",fig+i-1);
		}
		printf("\n");
	}
	for(int i=n+1;i<=2*n-1;i++)
	{
		for(int j=1;j<=i-n;j++) printf(" ");
		printf("%c",fig+2*n-1-i);
		if(i<2*n-1) 
		{
			for(int j=1;j<=2*(2*n-i)-3;j++) printf(" ");
			printf("%c",fig+2*n-1-i);
		}
		printf("\n");
	}
}