#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 5;
    printf("%i + %i = %i\n", a, b, a + b);
    printf("%i - %i = %i\n", a, b, a - b);
    printf("%i * %i = %i\n", a, b, a * b);
    printf("%i / %i = %i\n", a, b, a / b);
    printf("%i %% %i = %i\n", a, b, a % b);
    system("PAUSE");
    return EXIT_SUCCESS;
}