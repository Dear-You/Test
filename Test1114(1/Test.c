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
		printf("����B��ֵ��%5d", b);
		c = c * 1.3;
		c++;
		printf("����C��ֵ��%5f\n", c);
	}
	printf("talk�������������%s", name);
	
	return 0;
}