/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include <stdio.h>  
  
// 递归函数-----------需要补全   
int func(int n);  
  
int main()       
{      
   int n, result;      
   scanf("%d", &n);  
   result = func(n);  
   printf("f(%d)=%d\n", n, result);  
   return 0;      
}  
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */  
int func(int n)
{
	if(n>=20) 
	{
		printf("f(%d)=%d\n", n, n-4);
		return n-4;
	}
	if(n<10) 
	{
		printf("f(%d)=f(f(%d))\n", n, n+7);
		return func(func(n+7));
	}
	printf("f(%d)=f(f(%d)+5)\n", n, n+8);
	return func(func(n+8)+5);
}