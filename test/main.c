#include <stdlib.h>
#include "lib/biblioteka.h"
#include <stdio.h>

int main()
{
    char sen[100];
    scanf("%[^f]s", sen);
    printf("Output : %s", sen);

    printf("%i\n", ADD(3));
    printf("%i\n", suma(1, 3));
    return EXIT_SUCCESS;
}