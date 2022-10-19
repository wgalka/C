#PPWJC
lab4 - wskaźniki

##Pytania

##Przykłady
```c
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *wsk; // deklaracja zmiennej przechowującej adres w pamięci. (wskaźnik)

    char a = 'a';

    printf("Wartosc przechowywana przez zmienna a: %c\n", a);

    // Za pomocą operatora &nazwa_zmiennej można odczytać adres komórki w pamięci.
    // !Adres jest w formacie szesnastkowym, należy użyć odpowiedniego typu funkcji printf() aby go wypisać poprawnie.
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p\n", &a);

    wsk = &a; // Przypisanie adresu zmiennej a dla zmiennej wskaźnikowej
    
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p \n", wsk);
    // Aby odczytać wartość znajdującą się pod danym adresem używamy operatora wyłuskania "*"
    printf("Wartosc przechowywana pod adresem przechowaynym przez wskaznik %c", *wsk);

    

    return 0;
}
```


##Zadania

