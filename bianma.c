#include<stdio.h>
int main()
{
	int a,b,i;
	int n[100];
	scanf("%d\n%d",&a,&b);
	for(i=0;i<b;i++) scanf("%d",&n[i]);
	if(a==1) 
	{
		for(i=0;i<b-1;i++) printf("%d ",shuzu(i,n,i-1));
		printf("%d\n",shuzu(b-1,n,b-2));
	}
	if(a==2)
	{
		for(i=0;i<b-1;i++) printf("%d ",bianma(i,n,i+1));
		printf("%d\n",bianma(i,n,i+1));
	}
}
int shuzu(int i,int n[100],int i1)
{
	int m;
	if(i==0||i1<0) return 0;
	if(n[i]<=n[i1]) return shuzu(i,n,i1-1);
	if(n[i]>n[i1]) return shuzu(i,n,i1-1)+1;
}
int bianma(int i,int n[100],int i1)
{
	if(i1>5) return n[i];
	else if(n[i]>=n[i1]) n[i]++;
	return bianma(i,n,i1+1);
}
