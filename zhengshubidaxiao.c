#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a>=b) printf("min=%d\n",b);
	else printf("min=%d\n",a);
}

/*
{
	int a,b,c;
	unsigned int d;
	scanf("%d%d",&a,&b);
	d=(a-b)/2;
	c=(a+b)/2+d;
	printf("min=%d",a);
}
*/