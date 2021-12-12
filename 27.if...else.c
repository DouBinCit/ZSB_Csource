#include<stdio.h>
int main(){
	//定义两个整数，输出由大到小的顺序
	int a = 12,b = 20,t;
	if(a<b){
		//数值交换为 a = 20 , b = 12
		t = a;
		a = b;
		b = t;
	}
	printf("a=%d > b=%d",a,b);

	
	return 0;
}