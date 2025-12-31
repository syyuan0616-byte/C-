#include<stdio.h>
int main()
{
	int n,m,i,j,hmax,k,out;
	int a[100][100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		out=1;
		int c=0;
		hmax=a[i][0];
		for(j=0;j<m;j++)
		{
			if(a[i][j]>hmax)
			{
				hmax=a[i][j];
				c=j;
			}
		}
		for(k=0;k<n;k++)
		{
			if(a[k][c]<hmax) 
			{
				out=0;
				break;
			}
		}
		if(out==1)
		{
			printf("Point:a[%d][%d]==%d\n",i,c,hmax);
			break;
		}
	}
	if(out==0) printf("No Point\n");
}
