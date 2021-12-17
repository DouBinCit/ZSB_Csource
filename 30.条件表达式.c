#include<stdio.h>
int main() {
	//给定两个数，求最大值
	int a = 10,b = 20, max;
	//方法一
//	if(a>b){
//		max = a;
//	}
//	else{
//		max = b;
//	}
	//方法2
	//max = (a>b)?a:b;
	//方法3
	//(a>b)?(max=a):(max=b);
	//方法4
	(a>b)?printf("max = %d",a):printf("max = %d",b);

	//printf("max = %d",max);

	return 0;
}