#include<stdio.h>
int main()
{
	int a,b,flag=0;
	long long dp[204]={0};
	long long k=1;
	scanf("%d%d",&a,&b);
	dp[2*a+1]=1;
	dp[2*a+3]=1;
	for(int i=1;i<=10;i++) k*=10;
	for(int i=a+2;i<=b;i++) 
	{
		dp[2*i+1]=dp[2*i-1]+dp[2*i-3];
		dp[2*i]=dp[2*i-2]+dp[2*i-4];
		if(dp[2*i+1]>=k) 
		{
			dp[2*i+1]-=k;
			dp[2*i]+=1;
			flag=1;
		}
		
	}
	if(flag==0) printf("%lld\n",dp[2*b+1]);
	else printf("%lld%lld\n",dp[2*b],dp[2*b+1]);
}