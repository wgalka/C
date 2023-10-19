#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3] = {1, 2, 3};

    printf("wartosc 2 elementu tablicy (indeks 1) to: |%i| \n", tab[1]);

    tab[1] = 3;

    printf("wartosc 2 elementu tablicy (indeks 1) po zmianie: |%i| \n", tab[1]);
    printf("%i", 1 < 4);
    system("PAUSE");
    return EXIT_SUCCESS;
}