#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklaracja tablicy zawierającej 20 znaków
    char tablica[20];

    // Deklaracja tablicy zawierającej 5 liczb całkowitych
    int intTab[5];

    // Deklaracja tablicy zawierającej 3 liczby zmiennoprzecinkowe
    float floatTab[3];

    // Inicjalizacja tablicy znaków
    char charTab[10] = "Adam";

    printf("|%c|\n", charTab[6]);

    // Inicjalizacja tablicy liczbowej
    int intTab2[3] = {1, 2, 3};

    // Inicjalizacja bez podania liczby elementów
    float floatTab2[] = {1.1, 1.2, 1.3};
    printf("|%f|", floatTab2[4]);
    char charTab2[] = "Kowalski";

    return EXIT_SUCCESS;
}