#include <stdlib.h>
#include <stdio.h>

typedef union unia
{
    int liczbaCalkowita;
    char znak;
} unia;

int main()
{
    unia a;
    a.liczbaCalkowita = 4321;
    printf("a.liczba: %i\n", a.liczbaCalkowita); // liczba zostanie wyswietlona poprawnie
    a.znak = 'v';
    // Przez to że blok pamięci jest współdzielony po przypisaniu wartosci dla pola znak, liczba nie będzie poprawnie wyświetlana.
    printf("a.liczba: %i\n", a.liczbaCalkowita); // liczba nie zostanie wyswietlona poprawnie
    printf("a.znak: %c\n", a.znak);              // znak zostanie wyswietlony poprawnie
    system("PAUSE");
    return EXIT_SUCCESS;
}