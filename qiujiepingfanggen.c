#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int wucha(char e1[]);
double sqr(double x,double p,double e);
int main()
{
	char e1[10];
	double e=1,p,x;
	scanf("%lf",&x);
	scanf("%s",e1);
	int m=wucha(e1);
	for(int i=0;i<m;i++) e*=0.1;
	p=sqr(x,1,e);
	printf("%.8lf\n",p);
}
int wucha(char e1[])
{
	int n=strlen(e1);
	int r=0,quan=1;
	for(int i=n-1;i>=0;i--)
	{
		if(e1[i]=='-') break;
		r+=(e1[i]-'0')*quan;
		quan*=10;
	}
	return r;
}
double sqr(double x,double p,double e)
{
	//printf("a %lf %lf\n",fabs(p*p-x),e);
	if((fabs(p*p-x))<e) return p;
	else return sqr(x,(p+x/p)/2,e);
}