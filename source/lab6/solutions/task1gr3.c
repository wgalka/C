#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int a = 0; a <= 1; a++)
    {
        for (int b = 0; b <= 1; b++)
        {
            printf("%i |%i |%i  |%i  |%i  |%i  |\n",a,b, !a, !b, a&&b, a||b);
        }
    }

    return 0;
}
