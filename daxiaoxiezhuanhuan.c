#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if((a>=65)&&(a<=91)) printf("%c\n",a+32);
	else if((a>=97)&&(a<=123)) printf("%c\n",a-32);
	else printf("%c\n",a);
}