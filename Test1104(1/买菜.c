#include<stdio.h>
#define PRICE 5
//全局定量
int main() {
	const int  price = 3;
	//无法改变的全局定量
	printf("%d\n", PRICE);
	printf("%d\n", price);
	return 0;
}