#include<stdio.h>
int main(){
	//1.d��ʽ---����
	printf("No1.%d\n",100);	
	printf("No2.%5d\n",100);//ݔ����ֵ��5��,�Ҍ��R	
	printf("No3.%-5dhhhhh\n",100);//ݔ����ֵ��5��,���R	
	//2.c��ʽ---�ַ�
	printf("No4.%c\n",'w');	
	//3.s��ʽ---�ַ���
	printf("No5.%s\n","hello!");	
	//4.f��ʽ---���c��
	printf("No6.%20.15f\n",12.345);	
	printf("No7.%-20.15fhhhhh\n",12.345);	
	//5.e��ʽ---��ָ����ʽ��,ʾ���c��
	printf("No8.%e\n",12.345);	
	printf("No9.%e\n",0.000345);
	//6.o��ʽ---ݔ�����M�Ɣ�
	printf("No10.%o\n",12);//64 8(1) 1(4)  
	//7.x��ʽ---ݔ��ʮ���M�Ɣ�
	printf("No11.%x\n",12);
	printf("No12.%x\n",19);//16(1) 1(3)
	//8.u��ʽ---ݔ���o��̖�Ĕ�
	printf("No13.%u\n",19);
		
	return 0;
}