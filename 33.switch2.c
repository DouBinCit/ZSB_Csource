#include<stdio.h>
int main() {
	int grade,sum = 0;
	scanf("%d",&grade);//2  5
	switch(grade) {
		case 1:
		case 2:
		case 3:
			sum += 3;//sum = 3
		case 4:
			sum *= 2;//sum = 6
			break;
		case 5:
		case 6:
			sum -= 3;//sum = -3
	}
	printf("%d",sum);
	return 0;
}