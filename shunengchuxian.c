#include<stdio.h>
int main()
{
	int score[10];
	int i,j;
	for(i=0;i<10;i++) scanf("%d",&score[i]);
	int hao[10]={-1},max=score[0],count=1;
	hao[0]=0;
	for(i=1;i<10;i++)
	{
		if(score[i]>max)
		{
			max=score[i];
			for(j=0;j<count;j++) hao[j]=-1;
			hao[0]=i;
			count=1;
		}
		else if(score[i]==max)
		{
			count++;
			hao[count-1]=i;
		}
	}
	for(i=0;i<count;i++) printf("%d\n",hao[i]+1);
}
