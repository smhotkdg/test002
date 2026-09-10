#include <stdio.h>

void main() 
{
	int a[7] = { 72,95,48,88,95,61,30 };
	int max = a[0];        // 임시 챔피언
	int min = 100;
	

	for (int i = 1; i < 7; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (int i = 0; i < 7; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
		
			
	printf("Max Value = %d\n", max);
	printf("Min Value = %d\n", min);

}