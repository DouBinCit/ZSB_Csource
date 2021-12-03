#include<stdio.h>
int main(){
	int a = 10;
	int b = 3;
	int c = a+b;//算术运算符	高于	赋值运算符
	printf("c = %d\n",c);
	c = a - b;
	printf("c = %d\n",c);
	c = a * b;
	printf("c = %d\n",c);
	c = a / b;//10/3	10.5
	printf("c = %d\n",c);
	c = a % b;//10%3 = 1
	printf("c = %d\n",c);
	printf("c = %d\n",0 % 3);
	printf("c = %d\n",1 % 3);
	//注意:当求余数(%)时,%两边的值,一定为整数
	return 0;
}