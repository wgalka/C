# PPWJC

Unie i dynamiczna alokacja pamięci.

## Pytania

- Czym jest enum?
- Czym różni się struktura od uni?
- W jaki sposób/ do czego możemy wykorzystać dynamiczne alokowanie pamięci?
- jak odczytać i zmienić wartość pola w uni i strukturze?

## Przykłady

### Unie
Unie definiujemy za pomocą słówka kluczowego union:

```c
#include <stdio.h>
#include <stdlib.h>

union union_name {
    int a;
    char b;
    char c[5];
    struct asd{
        float d;
    } struct_name;
} Tmyname;

int main(int argc, char const *argv[])
{ 
    union union_name x = {4};
    printf("%d\n", x);
    x.b = 'd';
    printf("%c\n", x);  
    x.struct_name.d = 4.5;

    printf("Po zmianie ktoregos z pol struktury inne wartosci tez sa zmienione:\n");
    printf("x.a = %d", x.a);

    return 0;
}
```

Unie mają rozmiar równy największemu z przechowywanych typów. W pamięci wartości pól uni będą przechowywane we wspólnym bloku pamięci podczas gdy struktury będą miały zalokowane miejsca w pamieci dla każdego z pól. Unie w tym samym momencie mogą przechowywać tylko wartość jednego ze zdefiniowanych pól(watyość jest przechowywana we wspólnym bloku pamięci).

```c
#include <stdio.h>
#include <stdlib.h>

union myunion
{
    char a;
    int b;
    double c;
};

struct mystruct {
    char a;
    int b;
    double c;
};


int main(int argc, char const *argv[])
{
    union myunion myunion;
    struct mystruct mystruct;

    printf("ilosc bajtow ktore zajmuje unia = %i (max_zmienna=%i)\n", sizeof(myunion), sizeof(double));
    // Jeśli zmienne w strukturze posortujemy malejąco według zajmowanego miejsca w pamięci rozmiar struktury będzie mniejszy
    printf("ilosc bajtow ktore zajmuje struktura = %i (%i+%i+padding+%i)\n", sizeof(mystruct), sizeof(char), sizeof(int), sizeof(double));
    return 0;
}
```

Za pomocą słówna kluczowego typedef można zadeklarować krótką nazwę struktury lub uni.

```c
#include <stdio.h>
#include <stdlib.h>

typedef union myunion
{
    char a;
    int b;
    double c;
} shortname;

int main(int argc, char const *argv[])
{
    union myunion x; // deklaracja uni za pomocą pełnej definicji
    shortname x1; // seklaracja uni za pomocą krótkiej definicji

    x.a = 'a'; // przypisanie wartości do pola umi. W ten sposób możliwy jest też odczyt wartości.
    x1.a = 'a';
    return 0;
}
```

Wartości pól uni są przechowywane we wspólnym bloku pamięci. Po zmianie wartości innego pola unii wartości będą poprawne tylko dla tego pola.

```c
#include <stdlib.h>
#include <stdio.h>

typedef union unia
{
    int liczbaCalkowita;
    char znak;
} unia;

int main()
{
    unia a;
    a.liczbaCalkowita = 4321;
    printf("a.liczba: %i\n", a.liczbaCalkowita); // liczba zostanie wyswietlona poprawnie
    a.znak = 'v';
    // Przez to że blok pamięci jest współdzielony po przypisaniu wartosci dla pola znak, liczba nie będzie poprawnie wyświetlana.
    printf("a.liczba: %i\n", a.liczbaCalkowita); // liczba nie zostanie wyswietlona poprawnie
    printf("a.znak: %c\n", a.znak);              // znak zostanie wyswietlony poprawnie
    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Przekazywanie wskaźnika do struktury w funkcji

```c
#include <stdlib.h>
#include <stdio.h>

typdef {
    int x;
    int y;
}point;

void func(point *punkt){
    punkt->x = 5; // Aby dostać się do pola struktury należy użyć operatora ->
};

int main(){

    point punkt1 = {-10, 10}; // inicjalizacja struktury

    printf("przed wywolaniem funkcji:%i\n", punkt1.x);
    func(&punkt1);
    printf("po wywolaniu funkcji: %i\n", punkt1.x);

    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Enum

Typ wyniliczeniowy jest to struktura która może przyjmować pewne z góry ustalone wartości. Nazwy tych wartości zazwyczaj wskazują jakiś stan aplikacji lub nazwę obiektu która pozwala w czytelny sposób określic co dany kawąłek kodu robi. Pod daną nazwą kryje się liczba. Np. definicje kolorów w instrukcji switch czy menu.

```c
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef enum Color
{
    RED, // odpowiada liczbie 0
    GREEN, // odpowiada liczbie 1
    BLUE // odpowiada liczbie 2
} Color;

int main(int argc, char const *argv[])
{

    Color x = GREEN;

    switch (x)
    {
    case RED:
        printf("Wybrano czerwony");
        break;
    case GREEN:
        printf("Wybrano zielony");
        break;
    case 2: // Wartości tak naprawdę są liczbammi
        printf("Wybrano niebieski");
        break;
    default:
        break;
    }

    return 0;
}
```

### malloc i calloc

Funkcje malloc() i calloc() rezerwują w pamięci określoną ilość miejsca. Mijesce jest zwalniane po użyciu funkcji free()

```c
#include <stdio.h>
#include <stdlib.h>

int *alocateTabMalloc(int a)
{
    int rozmiar_tablicy = a * sizeof(int); // ilość elementów razy rozmiar jednego elementu
    int *ptr = malloc(rozmiar_tablicy);
    return ptr;
}

int *alocateTabCalloc(int a)
{
    int *ptr = calloc(a, sizeof(int)); // alokuje określoną ilość w pamięci danego typu i ustawia wartości w pamięci na 0.
    return ptr;
}

int main(int argc, char const *argv[])
{
    int *tab = alocateTabMalloc(4); // utworzenie tablicy na 4 zmienne typu int
    for (size_t i = 0; i <= 5; i++)
    {
        if (i > 3)
        {
            printf("tab[%d] = %d (poza tablica)\n", i, tab[i]);
            continue;
        }
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    int *tab2 = alocateTabCalloc(4); // utworzenie tablicy na 4 zmienne typu int
    for (size_t i = 0; i <= 5; i++)
    {
        if (i > 3)
        {
            printf("tab2[%d] = %d (poza tablica)\n", i, tab2[i]);
            continue;
        }
        printf("tab2[%d] = %d\n", i, tab2[i]);
    }

    // kopiuje wskaźnik do tablicy tab2
    int *ptr2 = tab2;
    // zwalniam pamięć
    free(tab2);
    // Wypisuję zawartość pamięci
    for (size_t i = 0; i <= 5; i++)
    {
        printf("ptr2[%d] = %d (zwomnione miejsce)\n", i, ptr2[i]);
    }

    return 0;
}
```

## Zadania

Chcemy utworzyć tablicę która moze przechowywać znaki, liczby całkowite i zmienno przecinkowe. Następnie funkcję która będzie wypisywała zawartość tablicy. Poniższe zadania tworzą jeden program.

### Zadanie 1

Utwórz typ wyliczeniowy `var_type` zawierający wartości INT, FLOAT, CHAR.

### Zadanie 2

Utwórz unię `var_value` mogącą przechowywać typy INT, FLOAT, CHAR. 

### Zadanie 3

Utwórz struktórę `var` która będzie przechowywać typ zmiennej, oraz wartość zmiennej. Typ zmiennej jest liczbą. 0 dla INT 1 dla FLOAT 2 dla CHAR. Do przechowywania wartości wykorzystywana jest unia.

### Zadanie 4

Utwórz funckję `setInt()` `setFloat()` `setChar()` które przyjmują dwa arumenty, wskaźnik do zmiennej `var` i wartość zmiennej. Funkcje ustawiają odpowienio wartości zmiennej var.

### Zadanie 5

Utwórz tablicę zawierającą 10 wartości typu `var`.
Wypełnij tablicę luczbami od 1 do 5 a pozostałe miejsca w tablicy literami A, B, C, D ...

### Zadanie 6

Utwóz funkcję varToString() która przyjmuje jako parametr zmienną typu `var` oraz zwraca wskaźnik do łańcucha znaków. Np. jeśli var przechowuje wartość 100 to varToString() pwoinna zwrócić wskaźnik na tablicę przechowującą napis "100". Wykorzystaj funkcję [`snprintf()`](https://pl.wikibooks.org/wiki/C/printf) do dynamicznego stworzenia tablicy. 

### Zadanie 7

Wypisz zawartość tablic wykorzystując stworzone funkcje.


## Zadania 2

### Zadanie 1

Zapoznaj się z opisem listy powiązanej: https://www.geeksforgeeks.org/what-is-linked-list/

- Lista powiązana składa się z węzłów, z których każdy zawiera dane oraz wskaźnik do następnego węzła w liście.

- Nie ma potrzeby z góry określać rozmiaru listy - nowe elementy mogą być łatwo dodawane i usuwane.

- Dostęp do elementów listy odbywa się sekwencyjnie, zaczynając od głowy (pierwszego elementu) i przechodząc przez kolejne elementy za pomocą wskaźników.

Zaimplementuj listę powiązaną w języku C.

