#include<stdio.h>
#include<string.h>
int main()
{
	char a[102],b[102],c[204];
	int count=0;
	scanf("%s%s",a,b);
	int alen=strlen(a),blen=strlen(b),i=0,j=0,k=0;
	while(i<alen&&j<blen)
	{
		if(a[i]<b[j]) c[k++]=a[i++];
		else c[k++]=b[j++];
	}
	while (i<alen) c[k++]=a[i++];
	while (j<blen) c[k++]=b[j++];
	c[k]='\0';
	puts(c);
}