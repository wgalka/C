# Programowanie w Języku C. Lab. 2

## Tablice

Tablica w języku C to struktura danych, która pozwala na przechowywanie wielu elementów o tym samym typie w jednym miejscu w pamięci. Tablica ma stały rozmiar, który musi być zadeklarowany podczas jej tworzenia. Elementy w tablicy są indeksowane, a dostęp do nich odbywa się za pomocą numeru indeksu. Indeksy w tablicy zaczynają się od zera (0), więc pierwszy element ma indeks 0, drugi element ma indeks 1, i tak dalej.

**Deklaracja tablicy**

Tablicę deklarujemy w jastępujący sposób: `[typ przechowywanych danych] [alias][[liczba elementow tablicy]];` np. `int tab[3];` utworzy tablicę dla 3 liczb całkowitych.

Można dokonać inicjalizacji tablicy. **W przypadku liczb całkowitych stosujemy znaki `{}`** pomiędzy króre wpisuje się wartości liczbowe oddzielone przecinkiem np. `float floatTab[30] = {1.1, 1.2, 1.3};` utworzy tablicę 30 liczb zmienno przecinkowych jednak tylko 3 pierwsze elementy zostaną zainicjalizowane, reszta będzie wartościami 0.

**W przypadku tablic znaków czyli tak zwanych `string` inicjalizacja tablicy odbywa się za pomocą `""`.** w następujący sposbób: `char charTab[10] = "Adam";` utworzy tablicę 10 znaków z których pierwsze 4 miejsca w tablicy zostaną uzupełnione literami Adam natomiast reszta elementów to znaki puste `\0`.

Jeśli inicjalizując `string` nie podamy ilości znaków w tablicy np. `char tab[] = "Adam";`, rozmiar takiej tablicy zostanie automatycznie ustawiony na 5. Ostatnim znakiem będzie znak null czyli `\0`(dzięki temu wiemy kiedy przestać wypisywać znaki z łańcucha znaków).

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklaracja tablicy zawierającej 20 znaków
    char tablica[20];

    // Deklaracja tablicy zawierającej 5 liczb całkowitych
    int intTab[5];

    // Deklaracja tablicy zawierającej 3 liczby zmiennoprzecinkowe
    float floatTab[3];

    // Inicjalizacja tablicy znaków
    char charTab[10] = "Adam";

    // Inicjalizacja tablicy liczbowej
    int intTab2[3] = {1, 2, 3};

    // Inicjalizacja bez podania liczby elementów
    float floatTab2[] = {1.1, 1.2, 1.3};
    char charTab2[] = "Kowalski";

    return EXIT_SUCCESS;
}
```
