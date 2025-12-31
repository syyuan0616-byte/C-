#include<stdio.h>
#include<string.h>
int turn10(char N[],int i );
int xiao(char N[]);
int main()
{
	char N[10000],M[10000];
	int i,j,flag=0;
	scanf("%s %s",N,M);
	for(i=xiao(N);i<=36;i++)
	{
		for(j=xiao(M);j<=36;j++)
		{
			if(turn10(N,i)==turn10(M,j)) 
			{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	if(i==37||j==37) printf("%s is not equal to %s in any base 2..36\n",N,M);
	else printf("%s (base %d) = %s (base %d)\n",N,i,M,j);
	
}
int turn10(char N[],int i)
{
	int n=0,i1,quan=1,count;
	for(i1=strlen(N)-1;i1>=0;i1--)
	{
		if(N[i1]>='0'&&N[i1]<='9') count=N[i1]-'0';
		else if(N[i1]>='A'&&N[i1]<='Z') count =N[i1]-'A'+10;
		n+=count*quan;
		quan*=i;
	}
	return n;
}
int xiao(char N[])
{
	int n=2,i1,quan=1,count;
	for(i1=strlen(N)-1;i1>=0;i1--)
	{
		if(N[i1]>='0'&&N[i1]<='9') count=N[i1]-'0';
		else if(N[i1]>='A'&&N[i1]<='Z') count =N[i1]-'A'+10;
		if(count+1>n) n=count+1; 
	}
	return n;
}
