/*
#include <stdio.h>
#pragma warning(disable : 4996)



void geo_prog(int b1, int q, int start, int stop)
{
	if (start == stop - 1)
	{
		printf("%d  ", b1 * q);
		return;
	}
	else
	{
		printf("%d  ", b1);
		geo_prog(b1 * q, q, start + 1, stop);
	}

}

void pyth_tb(int a, int b)
{
	for (int i = a; i <= b; i++)
		printf("%3d * %3d = %3d\n", a, i, a * i);
	
	
	if (a == b)
	{
		printf("%3d * %3d = %3d\n\n", a, b, a * b);
		return;
	}
	pyth_tb(a + 1, b);



}

int main()
{
	int a = 2, b = 15;
	pyth_tb(a, b);

	int frst_num = 2;
	int q = 3;
	int start = 0;
	int stop = 8;
	geo_prog(frst_num, q, start, stop);

}
*/