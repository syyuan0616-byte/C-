#include<stdio.h>
int panduan(int x1,int y1,int x2,int y2);
int main()
{
	int x1,x2,y1,y2;
	scanf("%d,%d\n%d,%d",&x1,&y1,&x2,&y2);
	printf("%d %d %d %d\n",x1,y1,x2,y2);
	if(panduan(x1,y1,x2,y2)>0) printf("Yes.\n");
	else printf("No.\n");
}
int panduan(int x1,int y1,int x2,int y2)
{
	if(x1==x2&&x1+y1==y2) return 1;
	if(x1+y1==x2&&y1==y2) return 1;
	if(x1>x2||y1>y2) return 0;
	return panduan(x1,x1+y1,x2,y2)+panduan(x1+y1,y1,x2,y2);
}
