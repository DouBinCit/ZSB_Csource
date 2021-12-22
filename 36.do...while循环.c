#include<stdio.h>
int main() {
	//1+2+3+...+100
	int i = 1, sum = 0;
	do{
		sum += i;
		i++;
	}while (i <= 100);
	printf("sum = %d", sum);
	return 0;
}