#include<stdio.h>
int main(){
	char ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:");
	ch = getchar();//scanf("%c",ch);
//	if('a'<=ch&&ch<='z'){//97<=ch&&ch<=122
//		ch = ch -32;
//	}
	(ch>='a'&&ch<='z')?(ch=ch-32):ch;
	printf("%c",ch);
	return 0;
}