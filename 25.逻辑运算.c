#include<stdio.h>
int main(){
	int a = 2,b = 4,c = 3, d = 7;
	printf("%d\n",a<b&&c<d);//1&&1=1
	printf("%d\n",a>b&&c<d);//0&&1=0
	printf("%d\n",a<b&&c>d);//1&&0=0
	printf("%d\n",a<b||c>d);//1||0=1
	printf("%d\n",a>b||c<d);//0||1=1
	printf("%d\n",!a>b);//0>4=0
	printf("%d\n",!(a>b));//!0=1
	printf("%d\n",!2);//0
	printf("%d\n",!-2);//0
	
	return 0;
}