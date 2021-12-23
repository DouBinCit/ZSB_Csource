#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=4;i++){//ÐÐ
		for(j=1;j<=5;j++){//ÁÐ
			printf("%-4d",i*j);
		}
		printf("\n");
	}
	return 0; 	
}