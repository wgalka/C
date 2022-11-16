#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char a;

    // printf("%i\n",sizeof(char));

    a = 255;
    printf("|%c| %i\n", a, a);

    a++;
    printf("|%c| %i\n", a, a);
    a++;
    printf("|%c| %i\n", a, a);
    a++;
    printf("|%c| %i\n", a, a);
    a++;
    printf("|%c| %i\n", a, a);

    return 0;
}
