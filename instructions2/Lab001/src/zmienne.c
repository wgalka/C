#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerVariable = 1234;
    float floatingPointNumber = 4.15;
    char charVariable = 'y';
    double doublePrecisionFloatingPointNumber = 4.123;

    printf("Liczba calkowita %i \n", integerVariable);
    printf("Liczba zmiennoprzecinkowa %.2f \n", floatingPointNumber); // .2 oznacza że zostaną wyświetlone 2 znaki po przecinku.
    // możemy wypisać wszystko za pomocą jednego wywołania funkcji printf(). Za %c zostanie podstawiony znak a za %lf
    printf("Znak %c \nLiczba zmiennoprzecinkowa o podwojnej precyzji %lf\n", charVariable, doublePrecisionFloatingPointNumber);
}
