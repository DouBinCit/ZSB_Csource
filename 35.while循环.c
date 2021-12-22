#include<stdio.h>
int main() {
	//1+2+3+...+100
	//1.賦初值
	int i = 1, sum = 0;
	while (i <= 100) {
		//重複的工作
		sum += i;
		//循環增量
		i++;
	}
	printf("sum = %d", sum);
	return 0;
}