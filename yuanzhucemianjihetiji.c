#include<stdio.h>
int main()
{
	double r,h,s,v;
	scanf("%lf%lf",&r,&h);
	s=2*3.1415926*r*h;
	v=3.1415926*r*r*h;
	printf("s=%.2f,v=%.2f\n",s,v);
}