#include<stdio.h>
int main(){
	float a= 12.4f;//4Byte �����ȸ����� ������Ч��Χ6λ
	printf("a = %f\n",a);
	printf("a = %.15f\n",a);
	
	double c = 12.4;//8Byte ˫���ȸ����� ������Ч��Χ15λ
	printf("c = %lf\n",c);
	printf("c = %.15lf\n",c);
	
	float b = 12.4;//double
	printf("b = %f\n",b);
	printf("b = %.15f\n",b);
	
	return 0;
}