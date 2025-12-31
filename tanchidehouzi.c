#include<stdio.h>
int main()
{
	int day;
	int have[100],eat[100];
	scanf("%d",&day);
	have[day-1]=1;
	for(int i=day-2;i>=0;i--)
	{
		have[i]=2*(i+1+have[i+1]);
	}
	if(have[0]==1) printf("The monkey got %d peach in first day.\n",have[0]);
	else printf("The monkey got %d peaches in first day.\n",have[0]);
}