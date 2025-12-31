#include<stdio.h>
int main()
{
	int year,days=1,flag=0;
	int a[13],b[13];
	scanf("%d",&year);
	for(int i=1900;i<year;i++)
	{
		if((i%400==0)||(i%4==0&&i%100!=0)) days+=366;
		else days+=365;
	}
	for(int i=0;i<=11;i++)
	{
		if(i==0) days+=12;
		else if(i==1||i==3||i==5||i==7||i==8||i==10) days+=31;
		else if(i==4||i==6||i==9||i==11) days+=30;
		else if(i==2&&((year%400==0)||(year%4==0&&year%100!=0))) days+=29;
		else days+=28;
		a[i]=days%7;
		if (a[i]==5) 
		{
			b[flag]=i+1;
			flag++;
		}
	}
	if(flag!=0) printf("There are %d Black Fridays in year %d.\nThey are:\n",flag,year);
	for(int i=0;i<flag;i++) printf("%d/%d/13\n",year,b[i]);
	
}