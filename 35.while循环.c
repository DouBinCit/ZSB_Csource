#include<stdio.h>
int main() {
	//1+2+3+...+100
	//1.�x��ֵ
	int i = 1, sum = 0;
	while (i <= 100) {
		//���}�Ĺ���
		sum += i;
		//ѭ�h����
		i++;
	}
	printf("sum = %d", sum);
	return 0;
}