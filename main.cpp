// work.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N_MAX 10000


void inputData(double* x, double* eps) {
	printf_s("Podaj x eps: ");
	scanf_s("%lf%lf", x, eps);
}

void sum(double x, double eps) {
	double sum = 1, err, n = 1, x0=1;
	


	while (n < N_MAX) {
		
		x0 *= x / n;
		sum += x0;

		err = fabs(sum - exp(x)) / fabs(exp(x));

		printf_s("%lf %lf %lf\n", sum, n, err);

		if (err < eps) break;
		n++;
	}

	
}

int main()
{
	double x, eps;

	inputData(&x, &eps);
	sum(x, eps);
	return 0;
}

