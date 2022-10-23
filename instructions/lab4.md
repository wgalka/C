# PPWJC
lab4 - funkcje i wskaźniki

## Pytania

## Przykłady
### [Funkcje](https://pl.wikibooks.org/wiki/C/Funkcje)

```c
#include <stdio.h>

// przed nazwą funkcji podajemy typ jaki powinna zwrócić
// Funkcje mogą mieć wiele argumentów różnego typu
int nazwa_funkcji(int argument1, int argument2){
    // Ciało funkcji - zestaw instruckji
    int wynik = argument1 + argument2;
    return wynik; // return kończy działanie funkcji i zwraca wynik. 
}

// funkcja może nie przyjmować argumentów i nie zwracać wartości
void hello(){
    printf("Hello World!\n");
    // return; // Możliwe jest przerwanie działania funkcji za pomocą return bez wartości
}

int main(int argc, char const *argv[])
{
    hello();
    int wynik = nazwa_funkcji(4,2); // wywołanie funkcji odbywa się przez podanie nazwy funkcji oraz jej argumentów w ()
    printf("%i",wynik);
    return 0;
}
```

### Funkcje z nieograniczoną liczbą argumentów.

```c
#include <stdio.h>
#include <stdarg.h> // Wymagana jest biblioteka w której zadeklarowane są użyte funkcje va_start, va_end

int suma(int argc, ...){ // w argc przechowuje liczbę argumentów
    va_list arg; // specjalny typ do przechowywania argumentów
    va_start(arg, argc); // rozpoczęcie odczytu
    for (int i = 0; i<argc; i++) { // va_arg(arg, int) odczytuje argumenty danego typu
      printf("%i\n",va_arg(arg,int));
    }
    va_end(arg); // zakończenie odczytu
    return 1;
}

int main(int argc, char const *argv[])
{
    suma(4, 1,2,3,5);
    return 0;
}
```


### [Wskaźniki](https://pl.wikibooks.org/wiki/C/Wska%C5%BAniki)
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
    printf("Adres pierwszego elementu tablicy (tab[0]): %p\n", *ptr_tab);
    printf("Wartosc: (tab[0]): %c \n", tab[0]);
    printf("Wartosc za pomoca wskaznika: (tab[0]): %c\n", *ptr_tab);
    /* code */
    return 0;
}
```
### Iteracja  tablicy za pomocą wskaźników

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int TAB_SIZE = 20;
    char tab[20] = "abcdefghijklmnoprst";

    // char *ptr_tab = tab - inicjalizacja wskaźnika i przypisanie mu adresu pierwszego elementu tablicy
    // warunekt ograniczający *ptr_tab nie potrzebuje operatora porównania ponieważ jeśli trafimy na koniec tablicy otrzymamy wartość 0(false)
    // warunek zwiększenia licznika pętli zwiększa licznik na kolejny adres w pamięci
    for (char *ptr_tab = tab; *ptr_tab; ptr_tab++)
    {
        printf("Wartosc: %c \n", *ptr_tab);
    }
    return 0;
}
```


## Zadania

### Zadanie 1 - `task1.exe` i `task1.c`
Skopiuj kod z drugiego laboratorium gdzie należało wypisać swoje dane oraz dwóch osób obok. Wykorzystując funkcję zoptymalizuj kod tak by zajmował jak najmniej lini kodu.

### Zadanie 2 - `task2.exe` i `task2.c`
Utwórz i przetestuj funkcję `max_tab()` która przyjmuje jako argument tablicę liczb całkowitych a następnie zwraca największy element tablicy.

### Zadanie 3 - `task3.exe` i `task3.c`
Utwórz i przetestuj funkcję `mean()` która jako argument przyjmuje tablicę liczb całkowitych a następnie zwraca średnią z tablicy.

### Zadanie 4 - `stats.exe` i `stats.c`
Korzystając z dokumentacji biblioteki [string.h](https://cpp0x.pl/dokumentacja/standard-C/cstring-string-h/609) utwórz i przetestuj funkcję `stats` która jako argument przyjmuje tablicę liczb całkowitych oraz łańcuch znaków który w zależności od przechowywanej zmiennej sprawi że funkcja zwróci inną wartość:
`min` - minimalną wartość z tablicy
`max` - maksymalną wartość z tablicy
`median` - medianę z tablicy
`mean` - średnią z tablicy

### Zadanie 5 - `task5.exe` i `task5.c`
Utworzyć funkcję która może przyjmować rózne liczby parametrów liczb zmienno przecinkowych i zwraca średnią argumentów.
Zmodyfikuj funkcję tak by zwracała odchylenie standardowe (zapoznaj się z dokumentacją biblioteki [math.h](https://cpp0x.pl/dokumentacja/standard-C/cmath-math-h/101) i wyszukaj odpowiednie funkcje) przekazanych argumentów według wzoru: 
$$
\sigma = \sqrt{\frac{1}{N}\sum{n=1}^{N}(x_i - \overline{x})^2}
$$ 
gdzie 
$$
\overline{x}=\frac{1}{N}\sum{i=1}^{N}x_i
$$

### Zadanie 6 - `task6.exe` i `task6.c`
Utwórz pętlę w której za pomocą wskaźników wypiszesz co n-ty element tablicy przechowującej liczby całkowite od 0-20. 

### Zadanie 7- `swap.exe` i `swap.c`
Napisz funkcję `swap()` która przyjmuje wskaźniki do dwóch zmiennych typu float. Funkcja zamienia wartośći tych zmiennych.