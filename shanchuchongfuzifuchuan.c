#include<stdio.h>
#include<string.h>
int main()
{
	char a[102],b[102];
	gets(a);
	int flag=0,k;
	for(int i=0;i<strlen(a);i++)
	{
		k=0;
		for(int j=0;j<flag;j++)
		{
			if(a[i]==b[j])
			{
				k=1;
				break;
			}
		}
		if(k==0) 
		{
			b[flag]=a[i];
			flag++;
		}
	}
	for(int i=0;i<flag;i++) printf("%c",b[i]);
	printf("\n");
}