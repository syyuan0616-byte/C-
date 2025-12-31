#include <stdio.h>  
int leap_year( int );     
int year_days( int );     
int days(int,int,int);    

int main() 
{
	int start[3],end[3];
	for(int i=0;i<3;i++) scanf("%d",&start[i]);
	for(int i=0;i<3;i++) scanf("%d",&end[i]);
	int n;
	n=days(end[0],end[1],end[2])-days(start[0],start[1],start[2]);
	if(start[1]<=2)
	{
		for(int i=start[0];i<end[0];i++) n+=leap_year(i) ? 366 : 365;
	}
	else
	{
		for(int i=start[0]+1;i<=end[0];i++) n+=leap_year(i) ? 366 : 365;
	}
	printf("%d days\n",n);
	return 0; 
} 

int leap_year( int year )  
{   return ( (year%4==0 && year%100!=0) || year%400==0 ) ? 1 : 0;  
}  
  
int year_days(int year)    
{   return leap_year( year ) ? 366 : 365;  
}  
  
int days( int year, int month, int day ) 
{   int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, i;  
      
    if  ( leap_year( year ) && month >2 )  
        day++;  
      
    for ( i=1; i<month; i++ )  
        day += months[i];  
  
    return day;  
}  
