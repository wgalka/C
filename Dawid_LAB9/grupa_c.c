#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

// Utwórz strukturę student przechowującą imię, nazwisko i numer albumu studenta.
// Imię i nazwisko będzie rezerwowane dynamicznie w pamięci(struktura ma zajmować w pamięci:
// ilość liter w imieniu + ilość liter w nazwisku + 4 - bajtów).

typedef struct student
{
    char *imie;
    char *nazwisko;
    unsigned int nralbumu;
} student;

// Napisz funkcję kopiuj która skopiuje zawartość struktury podanej jako pierwszy argument
// do struktury zdefiniowanej jako drugi argument

void zmiendane(char imie[], char nazwisko[], student *stud)
{
    int counter = 0;
    for (char *i = imie; *i; i++)
    {
        counter++;
    };

    zwolnijpamiec(stud);
    stud->imie = malloc(counter * sizeof(char));
    memcpy(stud->imie, imie, counter * sizeof(char));
}

void zwolnijpamiec(student *stud)
{
    free(stud->imie);
    free(stud->nazwisko);
}

int main()
{

    char *wsk = malloc(9 * sizeof(char));
    printf("%p\n", wsk);

    student stud1;
    student stud2;

    char imie[] = "Jan";
    printf("%p\n", imie);
    stud1.imie = malloc(3 * sizeof(char));
    stud1.imie = imie;

    stud1.nazwisko = calloc(6, sizeof(char));
    stud1.nazwisko = "Nowak";

    int tab[] = {1, 2, 3, 4, 5, 6};
    int *tab2 = calloc(6, sizeof(int));
    tab2 = "abcdefghijkl";
    printf("%s\n", tab2);

    stud1.nralbumu = 123434421;

    printf("%s %s %i\n", stud1.imie, stud1.nazwisko, stud1.nralbumu);
    stud2 = stud1;

    stud1.nralbumu = 321;

    printf("%i == %i\n", stud1.nralbumu, stud2.nralbumu);

    free(stud1.imie);
    free(stud1.nazwisko);
    free(wsk);
    return EXIT_SUCCESS;
}