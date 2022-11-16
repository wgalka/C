#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int a = 0; a <= 3; a++)
    {
        for (int b = 0; b <= 3; b++)
        {
            printf("%i, %i\n",a,b);
        }
    }

    return 0;
}
