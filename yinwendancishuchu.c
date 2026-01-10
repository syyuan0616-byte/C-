#include<stdio.h>
#include<string.h>
int quci(char ci[30][30],char ju[]);
void paixu(char ci[30][30],int m);
int main()
{
	char ju[30];
	if (fgets(ju, 30, stdin) == NULL) return 1;
	char ci[30][30];
	int m=quci(ci,ju);/*
	for(int i=0;i<m;i++)
	{
		printf("ci %s\n",ci[i]);
	}*/
	printf("%d\n",m);
	if(m==0)
	{
		printf(" ");
		return 0;
	}
	paixu(ci,m);
	for(int i=0;i<m-1;i++)
	{
		printf("%s ",ci[i]);
	}
	printf("%s\n",ci[m-1]);
}
int quci(char ci[30][30],char ju[])
{
	int n=strlen(ju),m=0;
	for(int i=0;i<n;i++)
	{
		if(ju[i]=='\n') break;
		if(ju[i]!=' ') 
		{
			int j=0;
			for(;ju[i+j]!=' '&&ju[i+j]!='\n'&&i+j<n;j++) ci[m][j]=ju[i+j];
			ci[m][j]='\0';
			i+=j;
			m++;
		}
	}
	return m;
}
void paixu(char ci[30][30],int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m-i-1;j++)
		{
			int k=0;
			for(;k<strlen(ci[j])&&k<strlen(ci[j+1]);k++)
			{
				if(ci[j][k]<ci[j+1][k]) break;
				if(ci[j][k]>ci[j+1][k])
				{
					char qita[30];
					strcpy(qita,ci[j]);
					strcpy(ci[j],ci[j+1]);
					strcpy(ci[j+1],qita);
					break;
				}
			}
			if(k==strlen(ci[j+1])&&k!=strlen(ci[j])) 
			{
				char qita[30];
				strcpy(qita,ci[j]);
				strcpy(ci[j],ci[j+1]);
				strcpy(ci[j+1],qita);
			}
		}
	}
}