#include<stdio.h>
int main()
{
	int n;
	char zuo;
	scanf("%d %c",&n,&zuo);
	if(n%2!=1||((zuo<'a'||zuo>'z')&&(zuo<'A'||zuo>'Z'))) 
	{
		printf("input error!\n");
		return 0;
	}
	if(zuo>='a'&&zuo<='z') zuo+='A'-'a';
	char fang[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) fang[i][j]=' ';
	}
	for(int i=0;i<n;i++) fang[0][i]=zuo+i;
	for(int i=0;i<n;i++) fang[i][0]=zuo+i;
	for(int i=0;i<n;i++) fang[i][n-1]=fang[0][n-1]+i;
	for(int i=0;i<n;i++) fang[n-1][i]=fang[n-1][0]+i;
	/*for(int i=0;i<n;i++)
	{
		if(i%2!=0) continue;
		for(int j=0;j<n;j++) fang[j][i]=fang[i][0]+j;
	}*/
	for(int i=0;i<n;i++) fang[i][n/2]=fang[0][n/2]+i;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) 
		{
			if(fang[i][j]>'Z') fang[i][j]=fang[i][j]-'Z'+'A'-1;
			printf("%c",fang[i][j]);
		}
		printf("\n");
	}
}