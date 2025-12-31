#include<stdio.h>
int main()
{
	int year,month,date,days=0,weekday;
	scanf("%d%d%d",&year,&month,&date);
	for(int i=1900;i<=year-1;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0)) days+=366;
		else days+=365;
	}
	for(int i=1;i<=month-1;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) days+=31;
		else if((i==2)&&(year%400==0||(year%4==0&&year%100!=0))) days+=29;
		else if(i==2) days+=28;
		else days+=30;
	}
	days+=date;
	weekday=days%7;
	printf("%d\n",weekday);
}