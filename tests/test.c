#include <stdio.h>

void main() 
{
    int n = 30528;
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    printf("%d\n", cnt);
}

