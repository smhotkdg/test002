#include <stdio.h>

void main() 
{
    int n = 567305282;
    int cnt = 0;
    int sum = 0;
    if (n == 0) 
        cnt = 1;
    while (n > 0) {
        cnt++;
        sum += n % 10;
        n /= 10;    
    }
    //목표! 3 + 0 + 5 + 2 + 8
    printf("cont = %d\n", cnt);
    printf("sum = %d\n", sum);
}

