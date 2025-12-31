#include<stdio.h>
int main()
{
	int year,month,day,date;
	int a[3];
	scanf("%d%d%d\n%d",&year,&month,&day,&date);
	a[0]=year;
	a[1]=month;
	a[2]=day;
	for(int i=date;i>0;i--)
	{
		int flag;
		if(a[1]==1||a[1]==3||a[1]==5||a[1]==7||a[1]==8||a[1]==10||a[1]==12) flag=1;
		else if(a[1]==4||a[1]==6||a[1]==9||a[1]==11) flag=2;
		else if(a[1]==2&&(a[0]%400==0||(a[0]%4==0&&a[0]%100!=0))) flag=3;
		else flag=4;
		a[2]=a[2]+1;
		if((flag==1&&a[2]==32)||(flag==2&&a[2]==31)||(flag==3&&a[2]==30)||(flag==4&&a[2]==29)) 
		{
			a[1]=a[1]+1;
			a[2]=1;
		}
		if(a[1]==13)
		{
			a[1]=1;
			a[0]=a[0]+1;
		}
	}
	printf("%d.%d.%d\n",a[0],a[1],a[2]);
}