#include<stdio.h>
#include<string.h>
void panduan(char ci[],char jilu[10000][100],int *ndi);
int main()
{
	char wenben[800];
	char jilu[10000][100];
	int n1=1;
	while(fgets(wenben,800,stdin)!=NULL)
	{
		int n=strlen(wenben);
		for(int i=0;i<n;i++)
		{
			if((wenben[i]<'a'||wenben[i]>'z')&&(wenben[i]<'A'||wenben[i]>'Z')) printf("%c",wenben[i]);
			else 
			{
				char ci[100];
				int j=0;
				for(;j<n;j++)
				{
					if((wenben[i+j]<'a'||wenben[i+j]>'z')&&(wenben[i+j]<'A'||wenben[i+j]>'Z')) break;
					ci[j]=wenben[i+j];
				}
				ci[j]='\0';
				//printf("ci %s\n",ci);
				panduan(ci,jilu,&n1);
				i+=j-1;
			}
		}
	}
}
void panduan(char ci[],char jilu[10000][100],int *ndi)
{
	//printf("%d\n",*ndi);
	int m=strlen(ci),i;
	for(i=0;i<*ndi;i++)
	{
		int flag=1,j;
		//printf("jilu %d %s\n",i,jilu[i]);
		for(j=0;j<m;j++)
		{
			if(ci[j]!=jilu[i][j]) 
			{
				flag=0;
				break;
			}
		}
		if(flag==1&&j==strlen(jilu[i])) 
		{
			printf("%d",i);
			return;
		}
	}
	for(int j=0;j<=m;j++)
	{
		jilu[*ndi][j]=ci[j];
	}
	if(i==*ndi) (*ndi)++;
	printf("%s",ci);
}