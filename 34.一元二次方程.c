#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1, x2, p, q,disc;

	printf("������ֱ�����a,b,c��ֵ:");
	scanf("%lf%lf%lf", &a, &b, &c);//&ȡַ�����

	if (fabs(a) <= 1e-6) { //1e-6��ʾ0.000001
		printf("��һԪ���η���");
	}
	else {
		disc = b * b - 4 * a * c;
		if (fabs(disc) <= 1e-6) {
			printf("x1,x2=%lf\n", -b / (2 * a));
		}
		else if (disc > 1e-6) {
			x1 = (-b + sqrt(disc)) / (2 * a);
			x2 = (-b - sqrt(disc)) / (2 * a);
			printf("x1=%lf\nx2=%lf", x1, x2);
		}
		else if (disc < 1e-6) {
			p = (-b) / (2 * a);
			q = (sqrt(-disc) / (2 * a));
			printf("x1=%lf+%lfi\nx2=%lf+%lfi", p, q, p, q);
		}
	}
	return 0;
}