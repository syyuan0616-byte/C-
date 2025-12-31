#include<stdio.h>
int he(int n,int m);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",he(n,n));
}
int he(int n,int m)
{
	if(m>0) return m*(m+1)+he(n,m-1);
	if(m==0) return 0;
}