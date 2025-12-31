#include<stdio.h>
#include<stdlib.h>
struct shuzu
{
	char fu[100];
	char shu[100][2][1000];
	int len1[100],len2[100]; 
	char jie[1000];
	int flag;
};
void shuru(struct shuzu *,int i);
void jiafa(struct shuzu *,int i);
void jianfa(struct shuzu *,int i);
void jianfa1(struct shuzu *,int i);
int main()
{
	int n,i,j;
	scanf("%d\n",&n);
	struct shuzu sz;
	for(i=0;i<n;i++) shuru(&sz,i);
	for(i=0;i<n;i++) 
	{
		if(sz.fu[i]=='+') 
		{
			jiafa(&sz,i);
			if(sz.flag==1) printf("1");
			for(j=0;j<sz.len1[i];j++) printf("%c",sz.jie[j]);
			printf("\n");
		}
		else 
		{
			jianfa(&sz,i);
			if(sz.flag==1) 
			{
				jianfa1(&sz,i); 
				printf("-");
			}
			for(j=0;j<sz.len2[i];j++) 
			{
				if(sz.jie[j]!='0') break;
			}
			if(j==sz.len2[i]) printf("0");
			for(;j<sz.len2[i];j++) printf("%c",sz.jie[j]);
			printf("\n");
		}
	}
} 
void shuru(struct shuzu *szzhi,int i)
{
	int i3;
	for(szzhi->len1[i]=1;szzhi->len1[i]<1000;szzhi->len1[i]++)
	{
		scanf("%c",&szzhi->shu[i][0][szzhi->len1[i]-1]);
		if(szzhi->shu[i][0][szzhi->len1[i]-1]>'9'||szzhi->shu[i][0][szzhi->len1[i]-1]<'0') 
		{
			szzhi->fu[i]=szzhi->shu[i][0][szzhi->len1[i]-1];
			szzhi->shu[i][0][szzhi->len1[i]-1]='\0';
			szzhi->len1[i]--;
			break;
		}
	}
	for(szzhi->len2[i]=1;szzhi->len2[i]<1000;szzhi->len2[i]++)
	{
		scanf("%c",&szzhi->shu[i][1][szzhi->len2[i]-1]);
		if(szzhi->shu[i][1][szzhi->len2[i]-1]>'9'||szzhi->shu[i][1][szzhi->len2[i]-1]<'0') 
		{
			szzhi->shu[i][1][szzhi->len2[i]-1]='\0';
			szzhi->len2[i]--;
			break;
		}
	}
}
void jiafa(struct shuzu *szzhi,int i)
{
	int i1,i4,j;
	szzhi->flag=0;
	if(szzhi->len1[i]>szzhi->len2[i]) 
	{
		for(i1=szzhi->len1[i]-1;i1>=0;i1--) 
		{
			if(szzhi->len2[i]-szzhi->len1[i]+i1>=0) szzhi->shu[i][1][i1]=szzhi->shu[i][1][szzhi->len2[i]-szzhi->len1[i]+i1];
			else szzhi->shu[i][1][i1]='0';
		}
		szzhi->len2[i]=szzhi->len1[i];
		szzhi->shu[i][1][szzhi->len1[i]]='\0';
	}
	else if(szzhi->len1[i]<szzhi->len2[i]) 
	{
		for(i1=szzhi->len2[i]-1;i1>=0;i1--) 
		{
			if((szzhi->len1[i])-(szzhi->len2[i])+i1>=0) szzhi->shu[i][0][i1]=szzhi->shu[i][0][szzhi->len1[i]-szzhi->len2[i]+i1];
			else szzhi->shu[i][0][i1]='0';
		}
		szzhi->len1[i]=szzhi->len2[i];
		szzhi->shu[i][0][szzhi->len1[i]]='\0';
	}
	for(j=szzhi->len1[i]-1;j>=0;j--)
	{
		szzhi->jie[j]=szzhi->flag+szzhi->shu[i][1][j]+szzhi->shu[i][0][j]-'0';
		szzhi->flag=0;
		if(szzhi->jie[j]>'9') 
		{
			szzhi->jie[j]='0'+szzhi->jie[j]-'9'-1;
			szzhi->flag=1;
		}
	}
}
void jianfa(struct shuzu *szzhi,int i)
{
	int i1,i4,j;
	szzhi->flag=0;
	if(szzhi->len1[i]>szzhi->len2[i]) 
	{
		for(i1=szzhi->len1[i]-1;i1>=0;i1--) 
		{
			if(szzhi->len2[i]-szzhi->len1[i]+i1>=0) szzhi->shu[i][1][i1]=szzhi->shu[i][1][szzhi->len2[i]-szzhi->len1[i]+i1];
			else szzhi->shu[i][1][i1]='0';
		}
		szzhi->len2[i]=szzhi->len1[i];
		szzhi->shu[i][1][szzhi->len1[i]]='\0';
	}
	else if(szzhi->len1[i]<szzhi->len2[i]) 
	{
		for(i1=szzhi->len2[i]-1;i1>=0;i1--) 
		{
			if(szzhi->len1[i]-szzhi->len2[i]+i1>=0) szzhi->shu[i][0][i1]=szzhi->shu[i][0][szzhi->len1[i]-szzhi->len2[i]+i1];
			else szzhi->shu[i][0][i1]='0';
		}
		szzhi->len1[i]=szzhi->len2[i];
		szzhi->shu[i][0][szzhi->len1[i]]='\0';
	}
	for(j=szzhi->len1[i]-1;j>=0;j--)
	{
		szzhi->jie[j]=-szzhi->flag+szzhi->shu[i][0][j]-szzhi->shu[i][1][j]+'0';
		szzhi->flag=0;
		if(szzhi->jie[j]<'0') 
		{
			szzhi->jie[j]='9'+szzhi->jie[j]-'0'+1;
			szzhi->flag=1;
		}
	}
}
void jianfa1(struct shuzu *szzhi,int i)
{
	int i1,i4,j;
	szzhi->flag=0;
	for(j=0;j<szzhi->len1[i];j++)
	{
		szzhi->shu[i][0][j]='0';
		szzhi->shu[i][1][j]=szzhi->jie[j];
	}
	for(j=szzhi->len1[i]-1;j>=0;j--)
	{
		szzhi->jie[j]=-szzhi->flag+szzhi->shu[i][0][j]-szzhi->shu[i][1][j]+'0';
		szzhi->flag=0;
		if(szzhi->jie[j]<'0') 
		{
			szzhi->jie[j]='9'+szzhi->jie[j]-'0'+1;
			szzhi->flag=1;
		}
	}
}
