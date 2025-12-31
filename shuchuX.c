#include<stdio.h>
#include<stdlib.h>
void out(int n,int *mdi,char *startdi);
int main()
{
	int n;
	char start;
	scanf("%c",&start);
	n=start-'0';
	int m=n-1;
	if(start>'9'||start<'1') 
	{
		printf("input error\n");
		return 0;
	}
	out(n,&m,&start);
}
void out(int n,int *mdi,char *startdi)
{
	int i;
	if(-(*mdi)+*startdi>'9') *startdi=*startdi-9;
	if(-(*mdi)+*startdi<'0') *startdi=*startdi+9;
	if((*mdi)<1-n) return;
	for(i=0;i<n-abs(*mdi)-1;i++) printf(" ");
	if(*mdi!=0) printf("%c",(*startdi)-(*mdi));
	for(i=0;i<2*(abs(*mdi))-1;i++)printf(" ");
	printf("%c\n",(*startdi)-(*mdi));
	(*mdi)--;
	out(n,mdi,startdi);
}  
