#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int b = 0;
	double c = 1;
	char name[99];

	scanf("%s", name);
	while (b++ < 16)
	{
		printf("现在B的值是%5d", b);
		c = c * 1.3;
		c++;
		printf("现在C的值是%5f\n", c);
	}
	printf("talk你输入的数字是%s", name);
	
	return 0;
}