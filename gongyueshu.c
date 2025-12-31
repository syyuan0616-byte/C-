#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",GCD(m,n));
}
int GCD(int m,int n)
{
	if(m<=n&&n%m==0) return m;
	else if(n<m) return GCD(n,m);
	else return GCD(m,n%m);
}