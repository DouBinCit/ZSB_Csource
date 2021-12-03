#include<stdio.h>
int main(){
	int a = 10;
	int b;
	//b = a++;
	/*
		1.先将a的值赋值给变量b = 10
		2.再将a的值加1.  a = a + 1 = 11
	*/
	b = ++a;
	/*
		1.先将a的值赋值给变量a = a + 1 = 11
		2.再将a的值加1.  b = 11
	*/
	printf("a = %d\n",a);
	printf("a = %d\n",b);
	return 0;
}