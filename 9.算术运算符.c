#include<stdio.h>
int main(){
	int a = 10;
	int b = 3;
	int c = a+b;//���������	����	��ֵ�����
	printf("c = %d\n",c);
	c = a - b;
	printf("c = %d\n",c);
	c = a * b;
	printf("c = %d\n",c);
	c = a / b;//10/3	10.5
	printf("c = %d\n",c);
	c = a % b;//10%3 = 1
	printf("c = %d\n",c);
	printf("c = %d\n",0 % 3);
	printf("c = %d\n",1 % 3);
	//ע��:��������(%)ʱ,%���ߵ�ֵ,һ��Ϊ����
	return 0;
}