#include <stdio.h>

int FindNumber(int *arr,int number)
{	
	int pos = -1;
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == number)
		{
			pos = i;
			break;
		}
	}
	return pos;
}
void main() 
{
	int arr[8] = { 7, 3, 9, 1, 5, 8, 2, 6 };
	
	for (int k = 0; k < 5; k++)
	{
		int number = 0;
		scanf_s("%d", &number);
		int pos = FindNumber(arr, number);
		if(pos == -1)
		{
			printf("X\n");
		}
		else
		{
			printf("pos = %d\n",pos);
		}
	}
	
}