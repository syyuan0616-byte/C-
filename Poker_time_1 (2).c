#include<stdio.h>
#include <string.h>
int sort(char a);
int bubble(char a[3][3],int flag[]);
void compare(char a[3][3],char b[3][3]);
void output(char a[3][3],int flag[]);
int turn0(char a[]);

int main()
{
	char a1[3][5],b1[3][5],a[3][3],b[3][3];
	int flaga[3],flagb[3];
	for(int i=0;i<3;i++)
	{
		a1[i][4]='\0';
		b1[i][4]='\0';
	}
	scanf("%s",a1[0]);
	scanf("%s",a1[1]);
	scanf("%s",a1[2]);
	scanf("%s",b1[0]);
	scanf("%s",b1[1]);
	scanf("%s",b1[2]);
	for(int i=0;i<3;i++)
	{
		flaga[i]=turn0(a1[i]);
		flagb[i]=turn0(b1[i]);
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++) a[i][j]=a1[i][j];
		for(int j=0;j<3;j++) b[i][j]=b1[i][j];
	}
	for(int i=0;i<3;i++)
	{
		a[i][2]='\0';
		b[i][2]='\0';
	}
	int o1,o2;
	o1=bubble(a,flaga);
	o2=bubble(b,flagb);
	if(o1==1||o2==1) return 0;
	compare(a,b);
	printf("A:");
	output(a,flaga);
	printf("B:");
	output(b,flagb);
}
int sort(char a)
{
	if(a=='H') return 60;
	else if(a=='S') return 40;
	else if(a=='D') return 20;
	else if(a=='C') return 0;
	else if(a>='2'&&a<='9') return a-'2'+2;
	else if(a=='A') return 14;
	else if(a=='0') return 10;
	else if(a=='J') return 11;
	else if(a=='Q') return 12;
	else if(a=='K') return 13;
	else return -1;
}
int bubble(char a[3][3],int flag[])
{
	int sort(char a);
	int g=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2-i;j++)
		{
			int s1,s2,s3,s4;
			char k;
			s1=sort(a[j][0]);
			s2=sort(a[j][1]);
			s3=sort(a[j+1][0]);
			s4=sort(a[j+1][1]);
			if(s1==-1||s2==-1||s3==-1||s4==-1||s1+s2==s3+s4) 
			{
				printf("Input Error!\n");
				g=1;
			}
			else if(s1+s2<s3+s4)
			{
				k=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=k;
				k=flag[j];
				flag[j]=flag[j+1];
				flag[j+1]=k;
				k=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=k;
			}
		}
	}
	if(g==1) return 1;
	else return -1;
}
void compare(char a[3][3],char b[3][3])
{
	int sort(char a);
	int flag=0;
	for(int i=0;i<3;i++)
	{
		if(sort(a[i][0])+sort(a[i][1])>sort(b[i][0])+sort(b[i][1])) 
		{
			printf("Winner is A!\n");
			flag=1;
			break;
		}
		else if(sort(a[i][0])+sort(a[i][1])<sort(b[i][0])+sort(b[i][1])) 
		{
			printf("Winner is B!\n");
			flag=1;
			break;
		}
	}
	if(flag==0) printf("Winner is X!\n");
}
void output(char a[3][3],int flag[])
{
	for(int i=0;i<3;i++) 
	{
		if(flag[i]==1) printf(" %c10",a[i][0]);
		else printf(" %c%c",a[i][0],a[i][1]);
	}
	printf("\n");
}
int turn0(char a[])
{
	if(a[1]=='1'&&a[2]=='0') 
	{
		a[1]='0';
		a[2]='\0';
		return 1;
	}
	else return 0;
}
