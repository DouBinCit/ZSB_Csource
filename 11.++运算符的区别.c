#include<stdio.h>
int main(){
	int a = 10;
	int b;
	//b = a++;
	/*
		1.�Ƚ�a��ֵ��ֵ������b = 10
		2.�ٽ�a��ֵ��1.  a = a + 1 = 11
	*/
	b = ++a;
	/*
		1.�Ƚ�a��ֵ��ֵ������a = a + 1 = 11
		2.�ٽ�a��ֵ��1.  b = 11
	*/
	printf("a = %d\n",a);
	printf("a = %d\n",b);
	return 0;
}