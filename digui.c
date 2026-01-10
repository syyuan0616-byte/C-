#include<stdio.h>
long findf(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",findf(n));
}
long findf(int n)
{
	if(n<=0) return 1;
	return n*findf(n-1)+findf(n-2);
}