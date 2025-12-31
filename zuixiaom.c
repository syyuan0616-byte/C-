#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	for(int count=0;;i++)
	{
		count+=i;
		if (count>=n) break;
	}
	printf("%d\n",i);
}