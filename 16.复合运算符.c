#include<stdio.h>
int main(){
	int a = 10;
	int b = 4;
	b+=4;// b = b + 4
	printf("b = %d\n",b);
	
	a *= b + 3;//a = a*(b+3); a = 10 * 11
	printf("a = %d\n",a);
	
	return 0;
	
}