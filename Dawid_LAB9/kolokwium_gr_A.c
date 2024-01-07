#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

// Napisz strukturę trojkat przechowującą długości boków trójkąta.

typedef struct trojkat
{
    float a;
    float b;
    float c;
} trojkat;

// Napisz funkcję, która otrzymuje jako argument zmienną typu struct
// trojkat i zwraca jako wartość obwód trójkąta przekazanego w argumencie

float obwodtrojkat(trojkat troj)
{
    return (troj.a + troj.b + troj.c);
}

// Napisz funkcję, otrzymującą jako argumenty zmienną troj1 typu struct trojkat
// z zadania 1 oraz zmienną troj2 wskaźnik na zmienną typu struct trojkat,
// i przepisuje zawartość zmiennej troj1 do zmiennej wskazywanej przez troj2.

void kopiuj(trojkat troj1, trojkat *troj2)
{
    printf("%p\n", &troj1);
    printf("kopiuj(troj1.a = %f)\n", troj1.a);
    printf("kopiuj(troj2->a = %f)\n", troj2->a);

    troj2->a = troj1.a;
    troj2->b = troj1.b;
    troj2->c = troj1.c;
}

int main()
{
    trojkat asd;
    printf("%p\n", asd);
    asd.a = 1;
    asd.b = 3;
    asd.c = 2;

    trojkat troj2;

    kopiuj(asd, &troj2);

    printf("t1.a(%f) == t2.a(%f)\n", asd.a, troj2.a);

    printf("obwod trojkat = %f\n", obwodtrojkat(asd));

    return EXIT_SUCCESS;
}