#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1 = 1234;
    printf("Zmienna przed modyfikacja: %i\n", var1);

    var1 = 4321;
    printf("Zmienna po modyfikacji: %i\n", var1);

    var1 = 44;
    printf("Zmienna po kolejnej modyfikacji: %i\n", var1);

    const int LIGHT_SPEED = 299792458;
}
