#include<stdio.h>
int main(){
	int a = 10,b = 2,c = 4;
	printf("%d\n",c>a+b);//0假否
	printf("%d\n",a>c+b);//1真是
	printf("%d\n",a>b==c);//1.a>b  1真是 2.1==c  0假否
	printf("%d\n",c!=a>b);//1.a>b  1真是 2.c!=1  1真是 
		
	return 0;
}