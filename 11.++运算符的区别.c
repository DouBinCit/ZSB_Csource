#include<stdio.h>
int main(){
	int a = 10;
	int b;
	
	//b = a++;
	/*
		1.先将a的值赋值给变量
		2.再将a的值加1.  
	*/
	//printf("a = %d\n",a);//2.a = a + 1 = 11
	//printf("b = %d\n",b);//1.b = 10
	
	b = ++a;
	/*
		1.先将a的值加1.
		2.再将a的值赋值给变量
	*/
	printf("a = %d\n",a);//1.a = a + 1 = 11
	printf("b = %d\n",b);//2.b = 11
	return 0;
}
