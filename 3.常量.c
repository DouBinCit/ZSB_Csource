#include<stdio.h>
#define PI 3.1415926
int main() {
	//6.������
	const int aa = 10;
	printf("aa = %d\n",aa);

	//5.���ų���
	printf("%f\n",PI);
	printf("%f\n",PI*3*3);

	//1.���ͳ���
	int a = 100;
	//int���� a�ı��� 100����
	printf("a = %d\n",a);
	int b = -100;
	printf("b = %d\n",b);
	
	//2.ʵ������ 
	float c = 12.3;
	printf("c = %f\n",c);
	float d = 13.4e3;//13.4*10^3
	printf("d = %f\n",d);
	float e = 13.4e-3;//13.4*10^-3
	printf("e = %f\n",e);

	//3.�ַ�����
	char f = 'a';//!@#$%^^^&��
	printf("f = %c\n",f);
	char g = '\n';// \n \d \t --> tab( 8���ֽ�) \r \v
	printf("111\t2%c22\n",g);
	char h = '\101';//��ʾ�˽��ƶ�Ӧ���ַ� --> 65
	// A --> 065    a --> 097
	//ÿһ���ַ�����Ӧһ��ascii����
	printf("h = %c\n",h);
	char i = '\110';
	printf("i = %c\n",i);
	char j = '\x41';//��ʾʮ�����ƶ�Ӧ���ַ� --> 65
	printf("j = %c\n",j);

	//4.�ַ�������
	char k[] = "abc";
	printf("k = %s\n",k);

	return 0;
}