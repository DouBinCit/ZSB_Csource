#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=100;i++)
//	for(;i<=100;i++)			//1.忽略初始化表达式
//	for(i=1;;i++)				//2.忽略条件表达式
//	for(i=1;i<=100;)			//3.忽略循环表达式
//	for(;;)						//4.忽略(1-3)表達式
//	for(i=1,sum=0;i<=100;i++){	//5.多條初始化表達式
	{
		sum += i;
	}
	printf("sum = %d",sum);
	return 0;
}