#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int shu[300],yong[300],f=0;
	for(int i=0;i<n;i++) scanf("%d",&shu[i]);
	for(int i=0;i<n;i++)
	{
		int j1=0,m=0;
		for(;j1<f;j1++) 
		{
			if(shu[i]==yong[j1]) break;
		}
		if(j1!=f) continue;
		for(int j=0;i+j<n;j++)
		{
			if(shu[i+j]==shu[i]) m++;
		}
		yong[f]=shu[i];
		f++;
		if(m>k) printf("%d\n",shu[i]);
	}
}
