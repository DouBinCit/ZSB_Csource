#include<stdio.h>
int main(){
	float a = 12.34f;
	//float a=12.84f;
	int b;
	b = (int)a;//将浮点数的精度丢失，不進行四捨五入
	printf("b = %d",b);
	
	return 0;
}