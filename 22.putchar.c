#include<stdio.h>
int main(){
	char a = 'B',b = 'O',c = 'Y';
	printf("%c%c%c\n",a,b,c);
	//×Ö·ûİ”³öº¯”µ(½öÏŞASCII×Ö·û)
	putchar(a);
	putchar(b);
	putchar(c);
	printf("\n");
	//×Ö·ûİ”Èëº¯”µ
	char d,e,f;
	d = getchar();
	e = getchar();
	f = getchar();
	putchar(d);
	putchar(e);
	putchar(f);
	return 0;
}