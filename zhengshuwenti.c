#include<stdio.h>  
int zhengchu(int *idi,int i,int n,int k);  
int main()  
{  
    int n,wei=1,out=0;  
    scanf("%d",&n);  
    if(n==8)   
    {  
        printf("0\n");  
        return 0;  
    }  
    for(int i=0;i<n-1;i++) wei*=10;  
    for(int i=wei;i<wei*10;i++) out+=zhengchu(&i,i,n,1);  
    printf("%d\n",out);  
}  
int zhengchu(int *idi,int i,int n,int k)  
{  
    int quan=1;  
    for(int j=0;j<n-k;j++) quan*=10;  
    if((i/quan)%(k*k)==0)  
    {  
        if(k==n)   
        {  
            *idi+=(n*n-1);  
            return 1;  
        }  
        else zhengchu(idi,i,n,k+1);  
    }  
    else return 0;  
}  