#include<stdio.h>
#define PI 3.1415926
int main() {
	//6.常变量
	const int aa = 10;
	printf("aa = %d\n",aa);

	//5.符号常量
	printf("%f\n",PI);
	printf("%f\n",PI*3*3);

	//1.整型常量
	int a = 100;
	//int类型 a的变量 100常量
	printf("a = %d\n",a);
	int b = -100;
	printf("b = %d\n",b);
	
	//2.实数常量 
	float c = 12.3;
	printf("c = %f\n",c);
	float d = 13.4e3;//13.4*10^3
	printf("d = %f\n",d);
	float e = 13.4e-3;//13.4*10^-3
	printf("e = %f\n",e);

	//3.字符常量
	char f = 'a';//!@#$%^^^&等
	printf("f = %c\n",f);
	char g = '\n';// \n \d \t --> tab( 8个字节) \r \v
	printf("111\t2%c22\n",g);
	char h = '\101';//表示八进制对应的字符 --> 65
	// A --> 065    a --> 097
	//每一个字符都对应一个ascii码制
	printf("h = %c\n",h);
	char i = '\110';
	printf("i = %c\n",i);
	char j = '\x41';//表示十六进制对应的字符 --> 65
	printf("j = %c\n",j);

	//4.字符串常量
	char k[] = "abc";
	printf("k = %s\n",k);

	return 0;
}