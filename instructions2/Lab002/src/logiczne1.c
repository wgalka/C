#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 5;

    printf("3 == 5 - %i", a == b);
    printf("3 != 5 - %i", a != b);
    printf("3 < 5 - %i", a < b);
    printf("3 > 5 - %i", a > b);
    printf("3 <= 5 - %i", a <= b);
    printf("3 >= 5 - %i", a >= b);
}