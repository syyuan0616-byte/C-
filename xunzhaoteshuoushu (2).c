#include<stdio.h>
int main()
{
	int a,b,wei1,wei2,wei3,wei4;
	scanf("%d %d",&a,&b);
	for(;a!=0||b!=0;)
	{
		if(a<=b&&a>999&&b<10000)
		{
			int counter=0;
			for(int i=a;i<=b;i++)
			{
				if(i%2==0)
				{
					wei1=i/1000;
					wei2=(i-wei1*1000)/100;
					wei3=(i-wei1*1000-wei2*100)/10;
					wei4=i-wei1*1000-wei2*100-wei3*10;
					if(wei1!=wei2&&wei2!=wei3&&wei3!=wei4&&wei1!=wei3&&wei1!=wei4&&wei2!=wei4) 
					{
						printf("%d  ",i);
						counter++;
					}
				}
			}
			printf("\ncounter=%d\n",counter);
		}	
		else if(a==0&&b==0) break;
		else printf("Error\n");
		scanf("%d%d",&a,&b);
	}
}