#include<stdio.h>
int main()
{
	int i,j=0,n,m,k,count=1;
	scanf("%d %d",&n,&m);
	int in[50]={0};
	for(i=0;i<n;i++) in[i]=1;
	for(i=1;i<n;i++)
	{
		count=1;
		while(1)
		{
			//printf("j %d in[j] %d count %d\n",j,in[j],count);
			if(count==m&&in[j]==1) break;
			if(in[j]==1) 
			{
				if(count==m) break;
				else count++;
			}
			j++;
			if(j>=n) j=0;
		}
		in[j]=0;
		j++;
	}
	for(i=0;i<n;i++) 
	{
		if(in[i]==1) printf("The left child is NO %d.\n",i+1);
	}
}
