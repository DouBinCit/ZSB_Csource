#include<stdio.h>
int main(){
	int a,b,c,i;
	for(i = 100;i<=500;i++){
		a = i/100;
		b = i%100/10;
		c = i%100%10;
		if((a*a*a)+(b*b*b)+(c*c*c)==i){
			printf("%-5d",i);
		}
	}
	return 0;
}