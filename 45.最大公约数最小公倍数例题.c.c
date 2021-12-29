#include<stdio.h>
int main(){
	int m,n,temp,i;
	
	printf("請分別輸入兩個整數:");
	scanf("%d%d",&m,&n);
	
	if(m>n) temp = m;
	else temp = n;
		
	for(i=temp;i>=1;i--){
		if(m%i==0&&n%i==0){
			printf("最大公約數:%-5d",i);
			break;
		}		
	}
	printf("最小公倍數:%-5d",m*n/i);
	
	return 0;
}
