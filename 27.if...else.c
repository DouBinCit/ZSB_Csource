#include<stdio.h>
int main(){
	//������������������ɴ�С��˳��
	int a = 12,b = 20,t;
	if(a<b){
		//��ֵ����Ϊ a = 20 , b = 12
		t = a;
		a = b;
		b = t;
	}
	printf("a=%d > b=%d",a,b);

	
	return 0;
}