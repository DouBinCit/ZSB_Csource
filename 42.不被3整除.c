#include<stdio.h>
int main(){
	int i;
	for(i=100;i<=200;i++){
		if(i%3==0)
			continue;
		printf("%5d\t",i);

	}
	return 0;
}