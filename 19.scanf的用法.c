#include<stdio.h>
int main(){
	int a;
	//scanf("%d",&a);
	scanf("a:%d",&a);//用户在输入值的时候，要严格按照输入格式输入
	printf("a = %d\n",a);
	printf("a(addr) = %d\n",&a);
	
	return 0;
}