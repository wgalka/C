#include <string.h> // Import biblioteki
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const size_t TABLEN = 4294967295;
                          
    printf("%lu\n",TABLEN);
    // TABLEN = 9999999999999999999999999999999999999999999999999999999;
    // int pureint = 999999999999999999999999999999999999;
    int numbers[TABLEN];
    // int tab2[TABLEN];
    printf("X: %i |",sizeof(numbers));
    return 0;
}
