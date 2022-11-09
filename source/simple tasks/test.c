#include <stdlib.h>

#include <stdio.h>

#include <limits.h>

int main(int argc, char const *argv[])

{

    int var2;
    scanf("%i", &var2);
    printf("Podano: %i", var2);
    switch (var2)
    {
    case 0:
        var2 += 10;
        break;
    case 1:
        var2 += 11;
        break;
    case 3:
        var2 += 33;
        break;
    default:
        var2 += 0;
        break;
    }

    printf("%i", var2);
    return 0;
}