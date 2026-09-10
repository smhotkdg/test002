#include <stdio.h>

void main() 
{
	int a[7] = { 72,95,48,88,95,61,30 };
	int sum =0;
	float avg =0;
	for (int i = 0; i < 7; i++)
	{
		sum += a[i];
	}

	printf("sum = %d\n", sum);
	avg = sum / 7;
	printf("avg = %f\n", avg);
}