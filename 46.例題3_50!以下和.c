#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double i, sum = 0, t = 1;

	for (i = 1; i <= 50;++i) {
		printf("%gµÄëA³Ë:\t", i);
		t *= i;
		printf("tµÄÖµžé:%.f\t", t);
		sum += t;
		//1.i=1	t=t*1=1*1=1		sum=0+t=0+1=1
		//2.i=2	t=t*2=1*2=2		sum=1+t=1+2=3
		//3.i=3	t=t*3=2*3=6		sum=3+t=3+(2*3)=9
		//4.i=4 t=t*4=6*4=24	sum=9+t=9+(6*4)=33
		//...
		printf("sum=%.20e\n", sum);

	}

	return 0;
}