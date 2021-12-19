#include<stdio.h>
int main(){
	char grade;
	printf("請輸入你的分數:");
	grade=getchar();
	switch(grade){//整数 int char
		case 'A':
			printf("85分以上");
			break;
		case 'B':
			printf("70-84");
			break;
		case 'C':
			printf("60-69");
			break;
		case 'D':
			printf("60以下");
			break;
		default:
			printf("輸入錯誤");
	}
	return 0;
}