/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include<stdio.h>  
#include<stdlib.h>  
  
typedef struct node {  
    int data;   
    struct node *next;   
} NODE;  
  
NODE* findelement(NODE *head);  
//****************HERE IS THE CODE FOR YOU TO FINISH****************************  
//**函数签名为：NODE* findelement(NODE*)***这个函数的含义是找到倒数第二个元素***************  
//******************************************************************************  
NODE* findelement(NODE *head)
{
	NODE *find=head;
	int n=0;
	for(;find->next!=NULL;n++) find=find->next;
	NODE *find1=head;
	if(n<=1) return NULL;
	for(int i=0;i<n-1;i++) find1=find1->next;
	return find1;
}
  
//****************ABOVE IS THE CODE FOR YOU TO FINISH***************************  
//******************************************************************************  
  
int main()   
{  
    NODE *head = (NODE*)malloc(sizeof(NODE));  
    head->data = 0;  
    head->next = NULL;  
    int n, x;  
  
    scanf("%d", &n);  
    NODE *pre = head;  
    while(n--) {  
        scanf("%d", &x);  
        NODE* cnt = (NODE*)malloc(sizeof(NODE));  
        cnt->data = x;  
        cnt->next = NULL;  
        pre->next = cnt;  
        pre = cnt;  
    }  
    NODE *pos = findelement(head);  
    if(pos == NULL) puts("No such element.");  
    else printf("%d\n", pos->data);  
  
    return 0;  
}  
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */  