#include<stdio.h>
int main(){
	//1.d格式---整数
	printf("No1.%d\n",100);	
	printf("No2.%5d\n",100);//輸出的值佔5列,右對齊	
	printf("No3.%-5dhhhhh\n",100);//輸出的值佔5列,左對齊	
	//2.c格式---字符
	printf("No4.%c\n",'w');	
	//3.s格式---字符串
	printf("No5.%s\n","hello!");	
	//4.f格式---浮點數
	printf("No6.%20.15f\n",12.345);	
	printf("No7.%-20.15fhhhhh\n",12.345);	
	//5.e格式---用指數形式表,示浮點數
	printf("No8.%e\n",12.345);	
	printf("No9.%e\n",0.000345);
	//6.o格式---輸出八進制數
	printf("No10.%o\n",12);//64 8(1) 1(4)  
	//7.x格式---輸出十六進制數
	printf("No11.%x\n",12);
	printf("No12.%x\n",19);//16(1) 1(3)
	//8.u格式---輸出無符號的數
	printf("No13.%u\n",19);
		
	return 0;
}