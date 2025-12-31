#include<stdio.h>
int main()
{
	int year,month,date,days=0,weekday,flag=0,mon=0;
	scanf("%d%d%d",&year,&month,&date);
	if(month==4||month==6||month==9||month==11) mon=1;
	else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) mon=2;
	else if((month==2)&&(year%400==0||(year%4==0&&year%100!=0))) mon=3;
	else mon=4;
	if(month<1||month>12) printf("month is error.\n");
	else if(date<1) printf("day is error.\n");
	else if(mon==1&&date>30) printf("day is error.\n");
	else if(mon==2&&date>31) printf("day is error.\n");
	else if(mon==3&&date>29) printf("day is error.\n");
	else if(mon==4&&date>28) printf("day is error.\n");
	else flag=1;
	if (flag==0) return 0;
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