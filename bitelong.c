#include<stdio.h>
void bubble(int a[],int n);
int main()
{
	int n,m,score=0,y=0,x=0;
	int d[102],l[102];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&d[i]);
	for(int i=0;i<m;i++) scanf("%d",&l[i]);
	bubble(d,n);
	bubble(l,m);
	for(int i=0;i<n;i++)
	{
		for(int j=y;j<m;j++)
		{
			if(d[i]<=l[j])
			{
				x++;
				y=j+1;
				score=score+l[j];
				break;
			}
		}
	}
	if(x<n) printf("bit is doomed!\n");
	else printf("%d\n",score);
}
void bubble(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int k;
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
}