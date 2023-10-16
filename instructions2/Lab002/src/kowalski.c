#include <stdio.h>
#include <stdlib.h>

void askName(char *wskaznikNaTablice)
{
    printf("Podaj Imie:");
    scanf("%s", wskaznikNaTablice);
    printf("%s\n", wskaznikNaTablice);
}

int main()
{
    char tablica[100];

    int a = 123;
    printf("Adres w pamięci przechowujący wartosc zmiennej a: %p\n", &a);
    printf("Adres w pamięci przechowujący wartosc pierwszego elementu talbicy: %p\n", tablica);
    printf("Wartosc przechowywana w danym adresie w pamieci: %i\n", *&a);

    askName(tablica);
    system("PAUSE");
    return EXIT_SUCCESS;
}