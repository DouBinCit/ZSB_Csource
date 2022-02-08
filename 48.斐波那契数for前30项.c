#include<stdio.h>
#include<math.h>
int main(){
	int i,f1 = 1,f2 = 1,f3;
	printf("%d\n",f1);
	printf("%d\n",f2);
	for(i=1;i<=28;i++){
		f3 = f2	+ f1;
		printf("%d\n",f3);
		f1 = f2;
		f2 = f3;
	}
}