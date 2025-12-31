/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */    
  
#include <stdio.h>    
    
int countsub( char str[], char ss[] );    
    
int main( )    
{    
    char s1[1000] = {0}, s2[100] = {0};    
    gets(s1);    
    gets(s2);    
    printf("%d\n", countsub( s1, s2 ) );    
}    
    
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */    
#include<string.h>  
int countsub( char str[], char ss[] )  
{  
    int n=0,lianxu=1;  
    for(int i=0;i<strlen(str);i++)  
    {  
        if(n>0&&str[i]!=ss[0]) lianxu=0;  
        else if(str[i]==ss[0])  
        {  
            if(lianxu==0) break;  
            int flag=1;  
            for(int j=0;j<strlen(ss);j++)  
            {  
                if(str[i+j]!=ss[j])   
                {  
                    lianxu=0;  
                    flag=0;  
                    break;  
                }  
                else lianxu=1;  
            }  
            if(flag==1)   
            {  
                i+=strlen(ss)-1;  
                n++;  
                lianxu=1;  
            }  
        }  
    }  
    return n;  
}