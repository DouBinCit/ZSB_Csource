#include<stdio.h>
int main(){
	int a = 10;
	printf("a = %d\n\n",a++);//1.賦值後輸出
	/*
		1.打印a
		2.a = a + 1; a=11
	*/
	printf("a = %d",a);//2.a+1後輸出
	return 0;
}
