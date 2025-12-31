#include<stdio.h>
int panduan(int n);
int main()
{
	int a,b;
	scanf("%d  %d",&a,&b);
	while(a!=0||b!=0) //!=不等于 ==等于 > < >= <= 
	{
		if(a>=b||a<1000||b>9999) 
		{
			printf("Error\n");
			scanf("%d  %d",&a,&b);
			continue;
		}
		int count=0;
		for(int i=a;i<=b;i++)
		{
			if(i%2!=0) continue;
			if(panduan(i)==1) 
			{
				printf("%d  ",i);
				count++;
			}
		}
		printf("\ncounter=%d\n",count);
		scanf("%d  %d",&a,&b);
	}
	return 0;
}
int panduan(int n)
{
	int wei[4];
	int i1=n;
	for(int i=0;i<4;i++)
	{
		wei[i]=i1%10;
		i1/=10;
	}
	if(wei[0]!=wei[1]&&wei[1]!=wei[2]&&wei[2]!=wei[3]&&wei[0]!=wei[2]&&wei[0]!=wei[3]&&wei[1]!=wei[3]) return 1;
	else return 0;
}