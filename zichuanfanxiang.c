#include <stdio.h>  
#include <stdlib.h>  
void reverse(char str[], int start, int end);  
int main()  
{   char str[100];  
    int start, end;  
    gets(str);  
    scanf("%d%d", &start, &end);  
    reverse( str, start, end );  
    printf("%s\n", str);  
    return 0;  
}
#include<string.h>
void reverse(char str[], int start, int end)
{
	if(end>=strlen(str)) end=strlen(str)-1;
	if(start>=end) return 0;
	char temp=str[start];
	str[start]=str[end];
	str[end]=temp;
	reverse(str,start+1,end-1);
}