#include<stdio.h>
int main()
{
	int rq1[3],rq2[3];
	scanf("%d %d %d\n%d %d %d",&rq1[0],&rq1[1],&rq1[2],&rq2[0],&rq2[1],&rq2[2]);
	int i=0,rq3[3];
	rq3[0]=rq1[0];
	rq3[1]=rq1[1];
	rq3[2]=rq1[2];
	for(;;i++)
	{
		int flag1=0,flag2=0; 
		if(rq3[0]%400==0||(rq3[0]%4==0&&rq3[0]%100!=0)) flag2=1;
		if(rq3[1]==1||rq3[1]==3||rq3[1]==5||rq3[1]==7||rq3[1]==8||rq3[1]==10||rq3[1]==12) flag1=1;
		else if(rq3[1]==4||rq3[1]==6||rq3[1]==9||rq3[1]==11) flag1=2;
		else if(rq3[1]==2&&flag2==1) flag1=3;
		rq3[2]++;
		if((flag1==0&&rq3[2]>28)||(flag1==1&&rq3[2]>31)||(flag1==2&&rq3[2]>30)||(flag1==3&&rq3[2]>29)) 
		{
			rq3[2]=1;
			rq3[1]++;
		}
		if(rq3[1]>12)
		{
			rq3[1]=1;
			rq3[0]++;
		}
		if(rq3[0]==rq2[0]&&rq3[1]==rq2[1]&&rq3[2]==rq2[2]) 
		{
			i++;
			break;
		}
	}
	printf("%d\n",i);
} 
