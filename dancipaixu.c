#include<stdio.h>
#include<string.h>
void bubble(char a[5][30]);
int main()
{
	char a[5][30];
	for(int i=0;i<5;i++) scanf("%s",a[i]);
	bubble(a);
	for(int i=0;i<5;i++) puts(a[i]);
}
void bubble(char a[5][30])
{
	char o[30];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			for(int k=0;k<30;k++)
			{
				if(a[j][k]<a[j+1][k])
				{
					for(int m=0;m<=strlen(a[j])||m<=strlen(a[j+1]);m++)
					{
						o[m]=a[j][m];
						a[j][m]=a[j+1][m];
						a[j+1][m]=o[m];
					}
					break;
				}
				else if(a[j][k]>a[j+1][k]) break;
			}
		}
	}
}