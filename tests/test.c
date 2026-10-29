#include <stdio.h>
#include <stdlib.h>
int FindNumber(int *arr,int number,int arrsize)
{	
	for (int i = 0; i < arrsize; i++)
	{
		if (arr[i] == number)
		{
			return i;
		}
	}
	return -1;
}
int MakeSixNumber(int *arr)
{
	

	int index = 0;
	while (index < 6)
	{
		int number = rand() % 45 + 1;
		int pos = FindNumber(arr, number, 6);
		if (pos == -1)
		{
			arr[index] = number;
			index++;
		}
	}
	return arr;
}
void main() 
{
	int answer[6] = { 8,14,21,22,42,45 };
	int arr[6] = { -1,-1,-1,-1,-1,-1 };
	for (int i = 0; i < 1000; i++)
	{
		MakeSixNumber(arr);
		for (int i = 0;i < 6;i++)
		{
			printf("number = %d\n", arr[i]);
		}
		printf("\n\n");
	}
	
}