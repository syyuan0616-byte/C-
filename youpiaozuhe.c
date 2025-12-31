#include<stdio.h>
int main()
{
	int a,b,c,d,flag=1,i;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(i=1;flag==1;i++)
	{
		flag=0;
		for(int n1=0;n1<=5;n1++)
		{
			for(int n2=0;n2<=5-n1;n2++)
			{
				for(int n3=0;n3<=5-n2-n1;n3++)
				{
					for(int n4=0;n4<=5-n1-n2-n3;n4++)
					{
						if(i==n1*a+n2*b+n3*c+n4*d) 
						{
							flag=1;
							break;
						}
					}
					if(flag==1) break;
				}
				if(flag==1) break;
			}
			if(flag==1) break;
		}
	}
	printf("The max is %d.\n",i-2);
}