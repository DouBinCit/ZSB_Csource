#include<stdio.h>
int main(){
	char a = 'B',b = 'O',c = 'Y';
	printf("%c%c%c\n",a,b,c);
	//�ַ�ݔ������(����ASCII�ַ�)
	putchar(a);
	putchar(b);
	putchar(c);
	printf("\n");
	//�ַ�ݔ�뺯��
	char d,e,f;
	d = getchar();
	e = getchar();
	f = getchar();
	putchar(d);
	putchar(e);
	putchar(f);
	return 0;
}