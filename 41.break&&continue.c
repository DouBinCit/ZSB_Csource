#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i%5==0)
			//break;
			continue;
		printf("%d\n",i);
	}
	//i=1,1<=10(ok),1%5==0(false),1,i=2
	//i=2,2<=10(ok),2%5==0(false),2,i=3
	//...
	//i=5,5<=10(ok),5%5==0(ok),,/*i=6*/
	/*...*/
	/*i=9,9<=10(ok),9%5==0(false),9,i=10*/
	/*i=10,10<=10(ok),10%5==0(ok)*/
	return 0;
}