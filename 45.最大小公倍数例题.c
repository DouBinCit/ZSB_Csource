#include<stdio.h>
int main(){
	int m,n,temp,i;
	
	printf("Ո�քeݔ��ɂ�����:");
	scanf("%d%d",&m,&n);
	
	if(m>n) temp = m;
	else temp = n;
		
	for(i=temp;i>=1;i--){
		if(m%i==0&&n%i==0){
			printf("��󹫼s��:%-5d",i);
			break;
		}		
	}
	printf("��С������:%-5d",m*n/i);
	
	return 0;
}