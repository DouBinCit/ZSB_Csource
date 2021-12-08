#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	printf("請輸入三角形的三條邊:");
	scanf("%lf%lf%lf",&a,&b,&c);
	double s=(a+b+c)/2;
	double area = sqrt(s*(s-a)*(s-b)*(s-c));//开根号
	printf("三角形的面积为：%lf",area);
	
	return 0;
}