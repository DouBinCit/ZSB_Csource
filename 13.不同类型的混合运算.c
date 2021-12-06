#include<stdio.h>
int main() {
	int i = 3;
	float f = 2.5f;
	double d = 7.5;
	double d2 = 10+'a'+i*f-d/3;//從左到右
	//1.進行10+'a',結果: 107 , 107+i*f-d/3;
	//2.*優先級大于+ , i*f=7.5(double) , 107+7.5-d/3;
	//3.107+7.5=114.5(double)	114.5-d/3
	//4.d/3=2.5(double)  114.5-2.5
	//5.112.0 (double)	
	printf("d2 = %f",d2);
	return 0;
}