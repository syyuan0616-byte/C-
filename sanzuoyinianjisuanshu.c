#include<stdio.h>
#include<strings.h>
void bubble(int [],int);
int main()
{
	char a[200];
	int b[100];
	char fu;
	int alen=0,blen=0,min,max,out,flag=1;
	a[199]='\0';
	for(int i=0;i<199;i++)
	{
		scanf("%c",&a[i]);
		alen++;
		if(a[i]=='=') 
		{
			a[i+1]='\0';
			break;
		}
	}
	for(int i=0;i<alen/2-1;i++)
	{
		b[i]=a[2*i]-48;
		blen++;
	}
	fu=a[alen-3];
	bubble(b,blen);
	min=b[blen-1];
	max=b[0];
	if(fu=='+') out=min+max;
	else if(fu=='-') out=max-min;
	else if(fu=='*') out=max*min;
	else if(fu=='/'&&min!=0) out=max/min;
	else if(fu=='%') out=max%min;
	else flag=0;
	if(flag) printf("%d%c%d=%d\n",max,fu,min,out);
	else printf("Error!\n");
}
void bubble(int b[],int blen)
{
	for(int i=0;i<blen-1;i++)
	{
		for(int j=0;j<blen-1-i;j++)
		{
			int pai;
			if(b[j]<b[j+1])
			{
				pai=b[j];
				b[j]=b[j+1];
				b[j+1]=pai;
			}
		}
	}
}