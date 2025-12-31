#include<stdio.h>  
int main()  
{  
    int n,flag;  
    char start;  
    int i,i1,i2,i3,i4,i5,j,j1,j2;  
    char a[100][100];  
    scanf("%d %c",&n,&start);  
    if(n%2==0) flag=n+n/2-2;  
    else flag=n+n/2-1;  
    for(i5=0;i5<n;i5++)  
    {  
        for(j2=0;j2<=flag;j2++) a[i5][j2]=' ';  
        a[i5][flag+1]='\0';  
    }  
    a[0][0]=start;  
    for(i1=1;i1<=flag;i1++)  
    {  
        a[0][i1]=a[0][i1-1]+1;  
        if(a[0][i1]=='9'+1) a[0][i1]='0';  
    }  
    a[n-1][flag]=a[0][flag];  
    for(i2=flag-1;i2>=n-1;i2--)  
    {  
        a[n-1][i2]=a[n-1][i2+1]-1;  
        if(a[n-1][i2]=='0'-1) a[n-1][i2]='9';  
    }  
    for(i3=1;i3<n-1;i3++)  
    {  
        a[i3][i3]=a[i3-1][i3-1]+1;  
        if(a[i3][i3]=='9'+1) a[i3][i3]='0';  
    }  
    for(i4=0;i4<n;i4++)  
    {
    	if(n==1) printf("%c\n",start);
        else
		{
			for(j1=0;j1<=flag;j1++)  printf("%c ",a[i4][j1]); 
			if(n%2==0)  
			{
				for(j=flag;j>=i4;j--)  
        		{  
					if(j==i4) printf("%c",a[i4][j]);  
          		  else printf("%c ",a[i4][j]);  
       			}  
       			printf("\n");  
			}
			else
			{
				for(j=flag-1;j>=i4;j--)  
        		{  
					if(j==i4) printf("%c",a[i4][j]);  
        		    else printf("%c ",a[i4][j]);  
      			}  
      		printf("\n");  
			}
		}
    }  
} 