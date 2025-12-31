#include<stdio.h>
void gu(int n);
int main()
{
	int n;
	scanf("%d",&n);
	gu(n);
}
void gu(int n)
{
	if(n!=1) printf("%d=>",n);
	if(n==1) 
	{
		printf("%d\n",n);
		return;
	}
	if(n%2==0) gu(n/2);
	else gu(n*3+1);
}