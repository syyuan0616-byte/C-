#include<stdio.h>
int main()
{
	int n,m,sum;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++) sum+=i;
	printf("The sum from %d to %d is %d.\n",n,m,sum);
}