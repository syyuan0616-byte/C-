#include<stdio.h>
int main()
{
	char a[100];
	gets(a);
	printf("Hi,there,");
	for(int i=0;a[i]!='\0';i++) printf("%c",a[i]);
	printf("!\n");
}