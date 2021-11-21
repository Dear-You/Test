#include<stdio.h>
#define SIZE 26
int main(void)
{
	int mint[26], c;
	char ch;

	for (ch = 'a', c = 0; ch < ('a' + SIZE); ch++, c++)
	{
		mint[c] = ch;
	}
	for (c = 0; c < SIZE; c++)
	{
		printf("%3c", mint[c]);
	}

	return 0;
}