// Dodać odpowiednie importy

// Miejsce na początek programu

// zadanie 1
/// Napisz program wypisujący twoje Imię, Nazwisko oraz w nowej linii numer albumu. UŻYJ TYLKO JEDNEGO WYWOŁANIA FUNKCJI PRINT.

// zadanie 2
// Zainicjalizuj zmienne określonych typów oraz wypisz ich zakres w postaci:
// int ma wartosc X oraz przechowuje dane w zakressie od -xxxx do xxxx
// gdzie xxxx to liczby z zadanego zakresu a X to wartość przechowywana przez zmienną.
// wypisz zakres następujących typów zmiennych:
// int
// signed char
// unsigned char
// float

// zadanie 3
// Utwórz pętlę wypisującą liczby podzielne przez 10 od twojego numeru albumu do 150000.
#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4;
    int x = a;
    if (a > b)
        if (b < c)
            x = b;
        else
            x = c;
    printf("%i", x);
    return 0;
}
