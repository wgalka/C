# PPWJC
lab4 - wskaźniki

## Pytania

## Przykłady

### Definiowanie zmiennych wskaźnikowych
```c
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr; // deklaracja zmiennej przechowującej adres w pamięci. (wskaźnik)

    char a = 'a';

    printf("Wartosc przechowywana przez zmienna a: %c\n", a);

    // Za pomocą operatora &nazwa_zmiennej można odczytać adres komórki w pamięci.
    // !Adres jest w formacie szesnastkowym, należy użyć odpowiedniego typu funkcji printf() aby go wypisać poprawnie.
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p\n", &a);

    ptr = &a; // Przypisanie adresu zmiennej a dla zmiennej wskaźnikowej
    
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p \n", ptr);
    // Aby odczytać wartość znajdującą się pod danym adresem używamy operatora wyłuskania "*"
    printf("Wartosc przechowywana pod adresem przechowaynym przez wskaznik %c\n", *ptr);

    // Zmiana wartości za pomocą wskaźnika
    *ptr = 'b';
    printf("Nowa wartosc zmiennej a: %c",a);

    return 0;
}
```

:warning: Przy definiowaniu wskażników uważaj na opercję przypisania:
```c
int a = 55;

int *ptr_a = &a;
```

```c
int a = 55;

int *ptr_a;
*ptr_a = &a; // w ten sposób zmienisz wartość pod danym adresem.
```
### Tablice
Zmienne tablicowe wskazują pierwszy adres w tablicy.

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char tab[20];

    char *ptr_tab = tab;
    printf("Adres pierwszego elementu tablicy (tab[0]): %p", ptr_tab);

    /* code */
    return 0;
}
```
### Iteracja  tablicy za pomocą wskaźników




## Zadania

