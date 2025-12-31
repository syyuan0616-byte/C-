#include<stdio.h>
int main()
{
	int a,n,out,a1,flag=0;
	scanf("%d%d",&a,&n);
	if(n==0) out=1;
	else out=a;
	a1=a%1000;
	for(int i=1;i<n;i++) 
	{
		out=out*a1;
		if(out>=1000) flag=1;
		out=out%1000;
	}
	if(flag==1) printf("The last 3 numbers is %03d.\n",out);
	else printf("The last 3 numbers is %d.\n",out);
	
}