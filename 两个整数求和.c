#include<stdio.h>
int main(){
	int a,b,sum;//定义变量,在内存中开辟空间
	a = 10;//赋值符号,从右向左
	b = 20;
	sum = a + b;
	printf("sum=%d",sum);//"sum=%d" --> 输出格式
	//%d --> 整数
	return 0;
}