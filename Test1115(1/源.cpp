#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main(void)
{
	long num;
	long sum = 0L;
	char name;
	scanf("%c", &name);
	printf("���������%c", name);

	while (scanf("%ld", &num) == 1)
	{
		sum = sum + num;
		printf("��������һ��ֵ�����ڵ�ֵ��%ld\n", sum);
	}
	printf("sum��ֵ��%ld", sum);

	return 0;
}