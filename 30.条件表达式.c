#include<stdio.h>
int main() {
	//�����������������ֵ
	int a = 10,b = 20, max;
	//����һ
//	if(a>b){
//		max = a;
//	}
//	else{
//		max = b;
//	}
	//����2
	//max = (a>b)?a:b;
	//����3
	//(a>b)?(max=a):(max=b);
	//����4
	(a>b)?printf("max = %d",a):printf("max = %d",b);

	//printf("max = %d",max);

	return 0;
}