#include<stdio.h>
int main(){
	char grade;
	printf("Ոݔ����ķ֔�:");
	grade=getchar();
	switch(grade){//���� int char
		case 'A':
			printf("85������");
			break;
		case 'B':
			printf("70-84");
			break;
		case 'C':
			printf("60-69");
			break;
		case 'D':
			printf("60����");
			break;
		default:
			printf("ݔ���e�`");
	}
	return 0;
}