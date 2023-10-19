#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    printf("Zmienna a znajduje sie pod adresem: |%p|", &a);
    int *wsk_a = &a;
    printf("Zmienna a znajduje sie pod adresem: |%p|", wsk_a);

    *wsk_a = 7; // zmiana wartości zmiennej a z użyciem wskaźnika
    printf("wartość zmiennej a po zmianie: %i", a);
    printf("wartość zmiennej a odczytana za pomocą wskaźnika: %i", *wsk_a); // *wsk_a - odczywanie wartości pod adresem przechowywanym przez wskaźnik
}