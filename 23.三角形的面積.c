#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	printf("Ոݔ�������ε����l߅:");
	scanf("%lf%lf%lf",&a,&b,&c);
	double s=(a+b+c)/2;
	double area = sqrt(s*(s-a)*(s-b)*(s-c));//������
	printf("�����ε����Ϊ��%lf",area);
	
	return 0;
}