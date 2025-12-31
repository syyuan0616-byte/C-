#include<stdio.h>
int main()
{
	int u1,u2[5],u3[5],u6;
	char u4[6],u5[6];
	scanf("%d",&u1);
	scanf("%s",u4);
	scanf("%s",u5);
	for(int i=0;i<5;i++) 
	{
		u2[i]=u4[i]-'0';
		u3[i]=u5[i]-'0';
	}
	u6=(u1+u2[1]+u2[3]+u3[0]+u3[2]+u3[4])*3+(u2[0]+u2[2]+u2[4]+u3[1]+u3[3]);
	u6=9-(u6-1)%10;
	printf("%d\n",u6);
}