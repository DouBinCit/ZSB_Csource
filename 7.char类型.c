#include<stdio.h>
int main(){
	char a = 'a';
	int b = a-32;//97-32=65
	printf("b = %d\n",b);
	printf("b = %c\n",b);

	int c = 's';
	printf("c = %c\n",c);
	printf("c = %d\n",c);
	
	char d ='W';//87+32=119
	printf("d = %c\n",d+32); 
	return 0;
}