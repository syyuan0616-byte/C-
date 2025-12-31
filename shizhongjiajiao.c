#include<stdio.h>
int main()
{
	double hour,min;
	scanf("%lf%lf",&hour,&min);
	double exh,rh,rm,r;
	exh=hour+min/60;
	rh=exh/12*360;
	rm=min/60*360;
	r=rh-rm;
	r=(r>180) ? (360-r):r;
	r=(r<0)?-r:r;
	printf("At %1.f:%02.f the angle is %.1lf degrees.\n",hour,min,r);
}