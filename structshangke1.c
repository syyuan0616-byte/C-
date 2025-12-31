#include<stdio.h>
struct student //124个字节
{
	int id; // 4个字节
	int age; // 4个字节
	char name[100]; // 100个字节
	char tel[11];  //11个字节
	int gender; // 4个字节
};
int main()
{
	struct student maomao;
	//maomao.id 访问int类型
	scanf("%d %s %d",&maomao.id,maomao.name,&maomao.age);
	printf("%d %s %d\n",maomao.id,maomao.name,maomao.age);
	printf("%d\n",sizeof(struct student));
}
