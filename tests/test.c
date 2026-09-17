#include <stdio.h>

float GetSum(int* data, int count)
{
	float sum = 0;
	for (int i = 0; i < count;i++)
	{
		sum += data[i];
	}
	return sum;
}
float GetAvg(int* data, int count)
{
	return GetSum(data, count) / count;	
}
void main() 
{
	printf("Input Target Value = ");
	int targetValue = -1;
	int targetIndex = -1;
	int targetCount = 0;
	scanf_s("%d", &targetValue);
	printf("Target = %d\n", targetValue);

	int a[10] = { 5,8,3,9,2,8,7,1,8,6};
	int maxValue = -1;
	int maxIndex = -1;	
	for(int i =0; i < 10; i++)
	{
		if (a[i] > maxValue)
		{
			maxValue = a[i];
			maxIndex = i;
		}
		if(a[i] == targetValue)
		{
			targetCount++;
			if (targetIndex == -1) 
			{
				targetIndex = i;
			}
		}
	}
	
	printf("targetCount = %d  targetIndex = %d \n", targetCount, targetIndex);
	printf("Max Value = %d  Max Index = %d", maxValue, maxIndex);
	printf("\n");
	printf("Sum = %f", GetSum(a,10));
	printf("\n");
	printf("avg = %.2f", GetAvg(a, 10));
}

