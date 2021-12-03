#include<stdio.h>
int main(){
	float a= 12.4f;//4Byte 单精度浮点型 数据有效范围6位
	printf("a = %f\n",a);
	printf("a = %.15f\n",a);
	
	double c = 12.4;//8Byte 双精度浮点型 数据有效范围15位
	printf("c = %lf\n",c);
	printf("c = %.15lf\n",c);
	
	float b = 12.4;//double
	printf("b = %f\n",b);
	printf("b = %.15f\n",b);
	
	return 0;
}