#include<stdio.h>
int main()
{
	int a,b,c,d,zi,mu,yue,mu1,zi1;
	char fu;
	scanf("%d/%d %c %d/%d",&a,&b,&fu,&c,&d);
	if (fu==43)	zi=a*d+b*c;
	else if(fu==45)	zi=a*d-b*c;
	else if(fu==42)	zi=a*c;
	else if(fu==47)	zi=a*d;
	mu=(fu==47)?b*c:b*d;
	mu1=(mu>=0)?mu:-mu;
	zi1=(zi>=0)?zi:-zi;
	for(int i=1;i<=mu1||i<=zi1;i++)
	{
		if((mu%i==0)&&(zi%i==0)) yue=i;
	}
	mu=mu/yue;
	zi=zi/yue;
	if((mu==1)||(zi==0)) printf("%d/%d %c %d/%d = %d\n",a,b,fu,c,d,zi);
	else	printf("%d/%d %c %d/%d = %d/%d\n",a,b,fu,c,d,zi,mu);
}