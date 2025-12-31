#include<stdio.h>
int main()
{
	int n,i,count;
	int shu[20],cheng[10];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&shu[i]);
	for(i=0;i<n/2;i++) printf("%d ",shu[i]*shu[n-i-1]);
	if(n%2!=0) printf("%d ",shu[n/2]);
	printf("\n");
}
