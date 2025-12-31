#include<stdio.h>  
int main()  
{  
    int f;  
    float t,t1;  
    scanf("%d %f",&f,&t);  
    if (f==1)  
    {  
        t1=(t-32)*5/9;  
        printf("The Centigrade is %.2f\n",t1);  
    }   
     else   
    {  
        t1=t*9/5+32;  
        printf("The Fahrenheit is %.2f\n",t1);  
    }  
}  