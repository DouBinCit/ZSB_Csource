#include<stdio.h>
#include<math.h>
int main(){
	
	double pi = 0;
	
	int m = 1;//����
	double n = 1.0;//��ĸ
	double term = 1.0;//�
	while(fabs(term)>=1e-8){
		pi = pi + term;
		m = -m;
		n = n + 2;
		term = m / n;
	}
	
	pi = 4 * pi;
	printf("%.15lf",pi);
	
	
	return 0;
}