#include<stdio.h>
int main()
{
	int a,b,c;
	char fu;
	scanf("%d%c%d",&a,&fu,&b);
	switch(fu)
	{
		case '+':c=a+b;break;
		case '-':c=a-b;break;
		case '*':c=a*b;break;
		case '/':c=a/b;break;
		case '%':c=a%b;break;
	}
	printf("%d\n",c);
}