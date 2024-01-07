#include <math.h>

// komentarz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int a = rand() % 5;
    printf("%i\n", a);
    float b = a;
    printf("%f\n", b);

    printf("max %.10f\n", (float)rand() / RAND_MAX);
    printf("%i %i\n", rand(), RAND_MAX);
    printf("%i\n", rand());

    printf("%f", M_PI);
    return 0;
}