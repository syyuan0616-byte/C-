#include<stdio.h>
#include<string.h>
struct renqian
{
	char ren[20];
	int qian;
};
int faqian(struct renqian rq[],int n);
int zhaoren(struct renqian rq[],int n,char r[]);
int main()
{
	struct renqian rq[10];
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{
		gets(rq[i].ren);
		//printf("%s\n",rq[i].ren);
		rq[i].qian=0;
	}
	for(int i=1;i<=n;i++) faqian(rq,n);
	for(int i=0;i<n;i++)
	{
		printf("%s %d\n",rq[i].ren,rq[i].qian);
	}
}
int zhaoren(struct renqian rq[],int n,char r[])
{
	int j;
	for(j=0;j<n;j++)
	{
		/*for(i=0;i<strlen(r);i++)
		{
			if(rq[j].ren[i]==r[i]) break;
		}
		if(r[i]=='\0') break;*/
		if (strncmp(rq[j].ren,r,20) == 0) return j;
	}
	return -1;
}
int faqian(struct renqian rq[],int n)
{
	int zhaoren(struct renqian rq[],int n,char r[]);
	char r[20];
	gets(r);
	int j=zhaoren(rq,n,r),m;
	//printf("j %d\n",j);	
	int qianshu,renshu;
	scanf("%d %d",&qianshu,&renshu);
	getchar();
	if(renshu==0) return 0;
	//printf("%d %d\n",qianshu,renshu);
	rq[j].qian-=(qianshu-qianshu%renshu);
	for(int k=0;k<renshu;k++)
	{
		char shou[20];
		gets(shou);
		m=zhaoren(rq,n,shou);
		rq[m].qian+=qianshu/renshu;
	}
	/*for(int k=0;k<n;k++) 
	{
		printf("%d\n",k);
		printf("%s",rq[k].ren);
		printf(" %d\n",rq[k].qian);
	}*/
	return 1;
}