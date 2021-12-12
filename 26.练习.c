#include<stdio.h>
int main(){
	int a = 0,b = 3,c;
	c = ++a||++b;
	//c = a++||++b;
	printf("%d",b);
	return 0;
}