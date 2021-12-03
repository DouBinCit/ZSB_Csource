#include<stdio.h>
int main() {
	unsigned int a = 100;
	printf("a = %d\n",a);

	unsigned int b = -100;
	printf("b = %d\t",b);
	printf("b = %u\n",b);//二进制最高位的 1 被看做数值,而非正负

	unsigned int c = 100;
	printf("c = %u",c);
	/*
		int (数值最高位(左一))0:正,1:负)
		00000000 00000000 00000000 00000000

		unsigned int (每一位都是数值)
		00000000 00000000 00000000 00000000

		unsigned int
			0000 1001 (十进制)-1
		int 
			1001 (十进制)9
	*/
	return 	0;
}