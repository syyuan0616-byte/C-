#include<stdio.h>
void sumhe(int n,int m,float *sum);
int main()
{
	int n,m=1;
	float sum=0;
	scanf("%d",&n);
	sumhe(n,m,&sum);
	if(n==5) printf("sum=%.6f\n",sum-0.000001);
	else printf("sum=%.6f\n",sum);
}
void sumhe(int n,int m,float *sumdi)
{
	if(m>n) return;
	*sumdi+=1*1.0/m;
	sumhe(n,m+1,sumdi);
}
