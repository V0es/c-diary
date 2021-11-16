/*
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)


double f(int fst_kf, int scnd_kf, int thrd_kf, double arg)
{
	return (fst_kf * arg * arg + scnd_kf * arg + thrd_kf);


}


int main()
{
	double a, b, c;
	double x, step, sum, sq, error, left_bor, right_bor;

	
	sum = 0;
	printf("Enter a, b, c, left border, right border, error\n");
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &left_bor, &right_bor, &error);
	
	step = (right_bor - left_bor) * error;
	x = left_bor;

	while (x < right_bor)
	{
		while ((f(a, b, c, x + step) * step) - (f(a, b, c, x) * (step)) > error)
		{
			step -= error * error;

		}
		sq = f(a, b, c, x) * (step);
		x += step;
		sum += sq;
	}
	printf("%.9lf\n", sum);


}
*/