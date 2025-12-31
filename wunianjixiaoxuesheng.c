#include<stdio.h>
#include<string.h>
void bubble(int a[],int k);
int main()
{
	int a[1000]={0};
	char in[2000];
	char fu;
	int i=0,k=0,flag=1,out;
	for(i=0;i<200;i++)
	{
		scanf("%c",&in[i]);
		if(in[i]=='-') flag=-1;
		if(in[i]>='0'&&in[i]<='9') 
		{
			a[k]*=10;
			a[k]+=(in[i]-'0');
		}
		if(in[i]==',') 
		{
			a[k]*=flag;
			flag=1;
			k++;
		}
		if(in[i]=='-'||in[i]=='+'||in[i]=='/'||in[i]=='*'||in[i]=='%') fu=in[i];
		if(in[i]=='=') 
		{
			in[i+1]='\0';
			break;
		}
	}
	
	k-=2;
	bubble(a,k);
	if(fu=='+') out=a[k]+a[0];
	if(fu=='-') out=a[k]-a[0];
	if(fu=='*') out=a[k]*a[0];
	if(fu=='/') out=a[k]/a[0];
	if(fu=='%') out=a[k]%a[0];
	if(a[k]<0) printf("(%d) %c (%d) = %d\n",a[k],fu,a[0],out);
	else if(a[0]<0) printf("%d %c (%d) = %d\n",a[k],fu,a[0],out);
	else if(a[0]==0&&fu=='/') printf("Error!");
	else printf("%d %c %d = %d\n",a[k],fu,a[0],out);
}
void bubble(int a[],int k)
{
	int w;
	for(int i=0;i<=k;i++)
	{
		for(int j=0;j<k-i;j++)
		{
			if(a[j]>a[j+1])
			{
				w=a[j];
				a[j]=a[j+1];
				a[j+1]=w;
			}
		}
	}
}