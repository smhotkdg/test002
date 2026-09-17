#include <stdio.h>

void main() 
{
	int a[10] = { 5,8,3,9,2,8,7,1,8,6};
	int maxValue = -1;
	int maxIndex = -1;
	int secondMax = -1;
	int secondMaxIndex = -1;
	for(int i =0; i < 10; i++)
	{
		if (a[i] > maxValue)
		{
			maxValue = a[i];
			maxIndex = i;
		}
		else if (a[i] > secondMax && a[i] < maxValue) 
		{
			secondMax = a[i];
			secondMaxIndex = i;
		}
	
	}
	printf("Max Value = %d  Max Index = %d", maxValue, maxIndex);
	printf("\n");
	printf("secondMax = %d  secondMax Index = %d", secondMax, secondMaxIndex);
}

