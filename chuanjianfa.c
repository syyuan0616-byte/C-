#include<stdio.h>
int main()
{
	char s[82],t[82],u[82];
	gets(s);
	gets(t);
	int flag=0;
	for(int i=0;s[i]!='\0';i++)
	{
		int k=0;
		for(int j=0;t[j]!='\0';j++)
		{
			if(s[i]==t[j]) 
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			u[flag]=s[i];
			flag++;
		}
	}
	for(int i=0;i<flag;i++) printf("%c",u[i]);
	printf("\n");
}