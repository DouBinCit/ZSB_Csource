#include<stdio.h>
#include<math.h>
int main(){
	
	double pi = 0;
	
	int m = 1;//·Ö×Ó
	double n = 1.0;//·ÖÄ¸
	double term = 1.0;//í—
	while(fabs(term)>=1e-8){
		pi = pi + term;
		m = -m;
		n = n + 2;
		term = m / n;
		//pi = 0+1;	m = -1;	n = 3.0;	term = -1/3
		//pi = 0+1+(-1/3);		m = 1;	n = 5;	term = 1/5
		//pi = 0+1+(-1/3)+1/5;	m = -1;	n = 7;	term = -1/7
	}
	
	pi = 4 * pi;
	printf("%.15lf",pi);
	
	
	return 0;
}