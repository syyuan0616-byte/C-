#include<stdio.h>
int main()
{
	int n100,flag=0;
	scanf("%d",&n100);
	for(int n10=0;n10<=n100*10;n10++)
	{
		for(int n5=0;n5<=(n100*100-n10*10)/5;n5++)
		{
			int n1;
			n1=n100*100-n10*10-n5*5;
			if(n1*1.8==n5*1.5&&n5*1.5==n10*2&&n10*2==n1*1.8) 
			{
				printf("%d,%d,%d\n",n1,n5,n10);
				flag=1;
				return 0;
			}
		}
	}
	if(flag==0) printf("No change.\n");
}