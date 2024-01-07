#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// Napisz strukturę trojkat przechowującą długości boków
// trójkąta.

typedef struct trojkat
{
    int a;
    int b;
    int c;
} trojkat;

//  Napisz funkcję, która otrzymuje jako argument zmienną
// typu struct trojkat i zwraca jako wartość obwód trójkąta
// przekazanego w argumencie.

int obwod(trojkat abc)
{
    return abc.a + abc.b + abc.c;
}

// Napisz funkcję, otrzymującą jako argumenty zmienną
// troj1 typu struct trojkat z zadania 1 oraz zmienną
// troj2 wskaźnik na zmienną typu struct trojkat
// Funckja przepisuje zawartość zmiennej troj1 do
// zmiennej wskazywanej przez troj2.

void kopiuj(trojkat *troj1, trojkat *troj2)
{
    int troj2_a = troj1->a;
    int troj2_b = troj1->b;
    int troj2_c = troj1->c;

    troj2->a = troj2_a;
    troj2->b = troj2_b;
    troj2->c = troj2_c;
}

typedef struct student
{
    char *imie;
    char *nazwisko;
    unsigned int nrAlbumu;
} student;

void kopoiujstudent(student *stud1, student *stud2)
{
    stud2->imie = calloc(4, sizeof(char));
    memcpy(stud2->imie, stud1->imie, sizeof(char) * 4);
}

int main()
{
    student stud1 = {"Jan", "Kowalski", 123123};

    student stud2;

    kopoiujstudent(&stud1, &stud2);

    printf("%s\n", stud2.imie);

    char *wsk = stud2.imie;
    *wsk = 'A';

    printf("stud1 =  %s\n", stud1.imie);
    printf("stud2 =  %s\n", stud2.imie);

    free(stud2.imie);
    system("PAUSE");
    return EXIT_SUCCESS;
}