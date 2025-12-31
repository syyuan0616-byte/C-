#include<stdio.h>
int run(int year);
int yue(int month,int year);
int main()
{
	int year,month,day,hou,lun,date,count=0,year1=2012,month1=4,day1=9;
	scanf("%d %d %d",&year,&month,&day);
	while(1)
	{
		if(year==year1&&month==month1&&day==day1) break;
		day1++;
		if(day1>yue(month1,year1)) 
		{
			day1=1;
			month1++;
		}
		if(month1>12) 
		{
			year1++;
			month1=1;
		}
		count++;
	}
	date=count%7+1;
	lun=count/7/13%5+1;
	//printf("%d %d\n",date,lun);
	if(date==6||date==7) printf("Free.\n");
	else 
	{
		hou=date-lun+3>0?date-lun+3:date-lun+8;
		//printf("%d\n",hou);
		hou=hou>5?hou-5:hou;
		//printf("%d\n",hou);
		printf("%d and %d.\n",hou,(hou==5?hou-5:hou+5));
	}
}
int run(int year)
{
	if((year%400==0)||(year%4==0&&year%100!=0)) return 1;
	else return 0;
}
int yue(int month,int year)
{
	int run(int year);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) return 31;
	else if(month==4||month==6||month==9||month==11) return 30;
	else if(month==2&&run(year)==1) return 29;
	else return 28;
}