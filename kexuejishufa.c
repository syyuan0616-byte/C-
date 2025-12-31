#include<stdio.h>    
#include<string.h>    
void jisuan1(char in[],int n,int *mdi);    
void jisuan2(char in[],int n,int *mdi);    
int main()    
{    
    char in[55];    
    char e;    
    int n,i;    
    scanf("%s",in);    
    scanf("%c",&e);    
    if(e==' ') scanf("%c",&e);    
    scanf("%d",&n);    
    if(n==' ') scanf("%c",&n);    
    if(n>=0)    
    {    
        int m=1;    
        jisuan1(in,n,&m);    
    }    
    else    
    {    
        int m=-1;    
        jisuan2(in,n,&m);    
    }    
    for(i=0;i<strlen(in);i++) printf("%c",in[i]);    
    printf("\n");    
}     
void jisuan1(char in[],int n,int *mdi)    
{    
    int i,j,i1;    
    for(i=0;i<strlen(in);i++)    
    {    
        if(in[i]=='.') break;    
    }    
    if(i==strlen(in))     
    {    
        int r=strlen(in);    
        in[r]='.';    
        in[r+1]='0';    
        in[r+2]='\0';    
    }    
    if(*mdi==n+1)    
    {    
        int f=strlen(in);    
        for(j=0;j<9-f+i;j++) in[f+j]='0';    
        in[f+9-f+i]='\0';    
        return;    
    }    
    if(*mdi>n+1) return;    
    if(i==strlen(in)-2)    
    {    
        in[i+2]='0';    
        in[i+3]='\0';    
    }    
    if(i==strlen(in)-1)    
    {    
        in[i+1]='0';    
        in[i+2]='0';    
        in[i+3]='\0';    
    }    
    char k;    
    k=in[i];    
    in[i]=in[i+1];    
    in[i+1]=k;    
    *mdi=(*mdi)+1;    
    jisuan1(in,n,mdi);    
}    
void jisuan2(char in[],int n,int *mdi)    
{    
    int i,j,i1;    
    for(i=0;i<strlen(in);i++)    
    {    
        if(in[i]=='.') break;    
    }     
    if(i==strlen(in)-1)     
    {    
        int r=strlen(in);    
        in[r]='.';    
        in[r+1]='0';    
        in[r+2]='\0';    
    }    
    if(*mdi==n-1)    
    {    
        if(i+8<strlen(in)-1) in[i+9]='\0';    
        else    
        {    
            int f=strlen(in);    
            for(j=0;j<9-f+i;j++) in[f+j]='0';    
            in[f+9-f+i]='\0';    
        }    
        return;    
    }    
    if(*mdi<n-1) return;    
    if(i==1)    
    {    
        int h,l;    
        l=strlen(in);    
        for(i1=l+1;i1>=0;i1--) in[i1]=in[i1-1];    
        in[l+1]='\0';    
        i++;    
        in[0]='0';    
    }    
    char k;    
    k=in[i];    
    in[i]=in[i-1];    
    in[i-1]=k;    
    *mdi=(*mdi)-1;    
    jisuan2(in,n,mdi);    
}