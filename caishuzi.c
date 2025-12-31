#include<stdio.h>
int main()
{
	int a[6],n=0,in;
	a[0]=1;
	for(int i=1;i<6;i++) a[i]=a[i-1]*2;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&in);
		if(in==0) break;
		else 
		{
			n+=a[in-1];
		}
	}
	printf("%d\n",n);
}