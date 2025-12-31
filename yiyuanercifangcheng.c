#include<stdio.h>
#include<math.h>
int main()
{
	int a1,b1,c1;
	double delta,x,x1,x2,a,b,c;
	scanf("%d%d%d",&a1,&b1,&c1);
	a=a1;
	b=b1;
	c=c1;
	if((a==0)&&(b==0)) printf("Input error!\n");
	else if(a==0)
	{
		x=-c/b;
		if(x==0) printf("x=%.6lf\n",-x);
		else printf("x=%.6lf\n",x);
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta>=0)
		{
			x1=(-b+sqrt(delta))/2/a;
			x2=(-b-sqrt(delta))/2/a;
			if(x1==x2) printf("x1=x2=%.6lf\n",x1);
			else printf("x1=%.6lf\nx2=%.6lf\n",x1,x2);
		}
		else 
		{
			delta=-delta;
			x1=sqrt(delta)/2/a;
			x=-b/2/a;
			if(x==0) printf("x1=%.6lfi\nx2=-%.6lfi\n",x1,x1);
			else printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",x,x1,x,x1);
		}
	}
	
}