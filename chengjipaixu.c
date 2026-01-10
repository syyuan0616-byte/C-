#include<stdio.h>
#include<string.h>
struct xuesheng
{
	char name[30];
	int score;
};
void bubble(struct xuesheng xs[],int n);
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	struct xuesheng xs[100];
	for(int i=0;i<n;i++)
	{
		int j;
		char a;
		for(j=0;j<30;j++)
		{
			scanf("%c",&a);
			if(a==',') break;
			else xs[i].name[j]=a;
		}
		xs[i].name[j]='\0';
		printf("n %s\n",xs[0].name);
		scanf("%d",&xs[i].score);
		printf("s %d\n",xs[i].score);
		getchar();
	}
	bubble(xs,n);
	for(int i=0;i<n;i++)
	{
		printf("%s,%d\n",xs[i].name,xs[i].score);
	}
}
void bubble(struct xuesheng xs[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(xs[j].score<xs[j+1].score)
			{
				int k=xs[j].score;
				xs[j].score=xs[j+1].score;
				xs[j+1].score=k;
				char huan[30];
				strcpy(huan,xs[j].name);
				strcpy(xs[j].name,xs[j+1].name);
				strcpy(xs[j+1].name,huan);
			}
		}
	}
}
