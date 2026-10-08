#include <stdio.h>


void main() 
{
	int arr[] = { 3,4,4,7,9,2,5,6,8,8,1,2 };
	int count = 1;
	int maxCount = 1;
	for (int i = 1; i < 12; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			count++;
 		}
		else 
		{
			count = 1;
		}
		if (count > maxCount)
		{
			maxCount = count;
		}
	}
	printf("%d\n", maxCount);
}
