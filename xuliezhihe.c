#include<stdio.h>
void sumhe(int n,int m,float *sum);
int main()
{
	int n,m=1;
	float sum=0;
	scanf("%d",&n);
	sumhe(n,m,&sum);
	if(n==1) printf("%d\n",n);
	else printf("%.6f\n",sum);
}
void sumhe(int n,int m,float *sumdi)
{
	if(m>n) return;
	if(m>1&&m%2!=0)*sumdi-=1*1.0/m;
	else *sumdi+=1*1.0/m;
	sumhe(n,m+1,sumdi);
}