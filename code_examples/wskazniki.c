#include <stdio.h>
#include <stdlib.h>

int obliczRozmiarTablicy(char tab[]){
    // tab jest tutaj wskaźnikiem na typ char stąd wielkosć tab zawsze będzie równa 8.
    int rozmiar = sizeof(tab)/sizeof(char);
    return rozmiar;
}

int main()
{

    int integerVariable = 123;
    double floatVariable = 21.32;

    int *integerPointer;
    double *floatPointer;

    integerPointer = &integerVariable;
    floatPointer = &floatVariable;

    printf("Adres zmiennej integerVariable = %p.\n", &integerVariable);
    printf("Ten sam adres prechowuje integerPointer = %p\n", integerPointer);
    printf("Wartość zmiennej pod adresem integer pointer = %d\n", *integerPointer);

    printf("Ten sam adres prechowuje integerPointer = %p\n", integerPointer + 1);
    printf("Wartość zmiennej pod adresem integer pointer = %d\n", *(integerPointer + 1));

    // adres tab[0] - 000000b4e45ffc60, tab+4 = 000000b4e45ffc70 - adres piątego elementu tablicy
    char tab[] = "Ala ma kota";

    printf("Wskaźnik na pierwszy element tablicy tab = %p, %p\n", tab, tab + 4);
    printf("Wartość pierwszego elementu tablicy = %d\n", *(tab + 4));

    // *wsk != '\0' - jeśli wartość pod adresem przechowywanym przez wsk jest różna od znak pusty '\0'
    for (char *wsk = tab; *wsk != '\0'; wsk++)
    {
        printf("%c", *wsk);
    }
    printf("\n");

    printf("Wielkosc zmiennej double pointer = %d\n",sizeof(floatPointer));
    printf("Wielkosc zmiennej integer pointer = %d\n",sizeof(integerPointer));

    printf("Wielkosc zmiennej double VARIABLE = %d\n",sizeof(floatVariable));
    printf("Wielkosc zmiennej integer VARIABLE = %d\n",sizeof(integerVariable));


    printf("Wielkosc tablicy tab = %d\n", sizeof(tab)/sizeof(char));

    printf("wielkosc tablicy obliczona w funkcji = %d\n", obliczRozmiarTablicy(tab));
    
    
    int*     integerPointer2 = 0x00000;
    // *integerPointer2 = 3;
    printf("wskaznik = %p\n", integerPointer2);
    printf("Po ponizdej lini kodu dalsza czesc programu sie nie wykona.");
    printf("wartosc = %d\n", *integerPointer2);
    

    printf("asd");
    printf("FDS");
    int a = 120;
    printf("%d", a);
    return EXIT_SUCCESS;
}

