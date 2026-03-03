//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	double x = 2.07;
//	double y = 1.55;
//	double a;
//
//	double na = (x + y) * (pow(x, 2) + 4);
//	double m = exp(x - 2);
//
//	a = (pow(1 + y, 2)) * (na / m);
//
//	printf("Result a = %.4f", a);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	
	double a, x, y;

	printf("x:");
	scanf("%lf", &x);

	printf("y:");
	scanf("%lf", &y);

	double na = (x + y) * (pow(x, 2) + 4);
	double m = exp(x - 2);

	a = (pow(1 + y, 2)) * (na / m);

	

	printf("Result a = %.4f", a);
	return 0;
}