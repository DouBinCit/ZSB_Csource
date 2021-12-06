#include<stdio.h>
int main(){
	//1.浮点数 --> 整數
	float a = 14.6f;
	int b;
	b = a;//精度丟失
	printf("b = %d\n",b);
	//2.整數 --> 浮點數
	int c = 17;
	double d;
	d = c;
	printf("d = %f\n",d);
	//3.char --> int
	char ch1 = 'a';
	int num;
	num = ch1;
	printf("num = %d\n",num);
	//4.int --> char
	int i = 289;
	//int i = 00000000 00000000 00000001 00100001 = 289
	//char ch2 = 00100001 = 33
	char ch2;
	ch2 = i;
	printf("ch2 = %d\n",ch2);
	
	return 0;
}