#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    // Typy całkowite
    puts("Integer");
    int maximumValue = INT_MAX;    // Biblioteka limits.h zawiera stałe np INT_MAX zawierające maksymalną wartość typu int
    signed minimumValue = INT_MIN; // Słówko kluczowe signed definiuje że typ może przechowywać dodatnie i ujemne wartości.
    printf("Wartosc w systemie                 | minimalna: %i \t\tmaksymalna %i\n", maximumValue, minimumValue);
    printf("Wartosc zdefiniowana przez standard| minimalna: %i \t\tmaksymalna %i\n", -32767, 32767);
}