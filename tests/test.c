#include <stdio.h>

void swap();
void main() 
{
    int a = 10;
    int b = 20;
    printf("a = %d, b = %d\n", a, b);
    //a = 10, b = 20
    swap(&a,&b);
    printf("a = %d, b = %d\n", a, b);
    //a = 20, b = 10
}

void swap(int *input_a,int *input_b) 
{
    int temp;
    temp = *input_b;
    *input_b = *input_a;
    *input_a = temp;
}

