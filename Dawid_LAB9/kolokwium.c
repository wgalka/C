#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Napisz strukturę student przechowującą imię, nazwisko,
// numer albumu.

typedef struct student
{
    char *imie;
    char *nazwisko;
    unsigned int numeralbumu;
} student;

// Napisz funkcję kopiującą wartości z jednej struktury
// do drugiej. // (zmiana wartości w strukturze 1
//  nie powinna powodować zmian w strukturze 2)

void xyz(struct student *bazastudenta, student *kopiujacystudent)
{
    char *imie = bazastudenta->imie;
    int ileznakow = 0;
    while (*imie)
    {
        ileznakow++;
        imie++;
    };

    printf("%p %p\n", &bazastudenta, &kopiujacystudent);
    kopiujacystudent->numeralbumu = bazastudenta->numeralbumu;
    kopiujacystudent->imie = calloc(ileznakow, sizeof(char));
    memcpy(kopiujacystudent->imie, bazastudenta->imie, ileznakow * sizeof(char));
}

int main()
{
    char imie[] = "Marcinek";
    printf("%s", imie);
    char nazwisko[] = "Fusiarz";
    student stud1 = {"Hubert", "Fusiarz", 123564};

    student stud2;
    printf("%p %p\n", &stud1, &stud2);
    xyz(&stud1, &stud2);

    stud2.numeralbumu = 421;

    printf("%i == %i\n", stud1.numeralbumu, stud2.numeralbumu);
    printf("%p == %p\n", stud1.imie, stud2.imie);
    printf("%p == %p\n", stud1.numeralbumu, stud2.numeralbumu);

    system("PAUSE");
    free(stud2.imie);
    return EXIT_SUCCESS;
}