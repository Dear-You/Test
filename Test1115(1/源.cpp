#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main(void)
{
	long num;
	long sum = 0L;
	char name;
	scanf("%c", &name);
	printf("你的名字是%c", name);

	while (scanf("%ld", &num) == 1)
	{
		sum = sum + num;
		printf("请输入下一个值，现在的值是%ld\n", sum);
	}
	printf("sum的值是%ld", sum);

	return 0;
}