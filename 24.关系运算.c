#include<stdio.h>
int main(){
	int a = 10,b = 2,c = 4;
	printf("%d\n",c>a+b);//0�ٷ�
	printf("%d\n",a>c+b);//1����
	printf("%d\n",a>b==c);//1.a>b  1���� 2.1==c  0�ٷ�
	printf("%d\n",c!=a>b);//1.a>b  1���� 2.c!=1  1���� 
		
	return 0;
}