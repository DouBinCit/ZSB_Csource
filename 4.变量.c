#include<stdio.h>
int main() {
	
	int a;//������һ�����������ڴ��п��ٿռ�
	/*
		DEV-C++: 4Byte=32bit
		TurboC:  2Byte
		64λ����ϵͳ:  8Byte
		1Byte = 8bit	
	*/
	a = 10;//��������ֵ 1010
	//00000000 00000000 00000000 00001010
	//1111 --> 15
	printf("a = %d\n",a);
	
	short b=2;//������һ������Ϊ�����ͣ����ڴ��п���2Byte�ռ�
	printf("b = %d\n",b);
	
	long c = 10;//������һ������Ϊ�����ͣ����ڴ��п���4Byte�ռ�
	printf("c = %d\n",c);
	
	long long d = 100;//������һ������Ϊ�������ͣ����ڴ��п���8Byte�ռ�
	printf("d = %d\n",d);
	
	return 0;	
}