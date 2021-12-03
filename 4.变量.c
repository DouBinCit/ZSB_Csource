#include<stdio.h>
int main() {
	
	int a;//定义了一个变量，在内存中开辟空间
	/*
		DEV-C++: 4Byte=32bit
		TurboC:  2Byte
		64位编译系统:  8Byte
		1Byte = 8bit	
	*/
	a = 10;//给变量赋值 1010
	//00000000 00000000 00000000 00001010
	//1111 --> 15
	printf("a = %d\n",a);
	
	short b=2;//定义了一个变量为短整型，在内存中开辟2Byte空间
	printf("b = %d\n",b);
	
	long c = 10;//定义了一个变量为长整型，在内存中开辟4Byte空间
	printf("c = %d\n",c);
	
	long long d = 100;//定义了一个变量为超长整型，在内存中开辟8Byte空间
	printf("d = %d\n",d);
	
	return 0;	
}