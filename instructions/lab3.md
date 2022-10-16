# PPWJC 
Lab 3

## Pytania

## Zadania
### Defioniowanie tablic jedno i [wielowymiarowych](https://cse.engineering.nyu.edu/~mleung/CS1114/s08/ch08/MDmemory.htm):

```c
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int array[3]; // Deklaracja tablicy o wielkości 3
    array[0] = 1; // Ustawienie kolejnych wartości w tablicy
    array[1] = 2;
    array[2] = 3;
    array[3] = 4; // Zachowanie "Undefined" ponieważ wykraczamy poza zakres tablicy. Wartość może ulegać zmianie w czasie działania systemu ponieważ program nie zarezerwował tego miejsca w pamięci.
     
    printf("Wielkość tablicy w bajtach: %i\n",sizeof(array));
    printf("Ponieważ wielkość int - %i bajtów razy wielkość tablicy - 3\n", sizeof(int));
    printf("array[0] = %i\n", array[0]);
    printf("array[1] = %i\n", array[1]);
    printf("array[2] = %i\n", array[2]);
    printf("array[3] = %i\n", array[3]); // poza zakresem zadeklarowanej tablicy
    printf("array[4] = %i\n", array[4]); // poza zakresem zadeklarowanej tablicy
    return 0;
}
```

Poniższy literał pozwala na zdefiniowanie tablicy o danej wielkości i przypisnanie odrazu wartości do kolejnych pól tablicy.

```c
int array[3] = {1,2,3};
```

Lub bez podawania wielkośći. Kompilator odczyta ją z literału deklarującego wartości.

```c
int array[] = {1,2,3};
```

Definiowanie tablicy wielowymiarowej(tablica w tablicy):

```c
int main(int argc, char const *argv[])
{
    int array[2][3];
    // w tablicy o indeksie 0 jest tablica przechowująca tablicę int 3 elementową
    array[0][0] = 1; 
    array[0][1] = 2;
    array[0][2] = 3;
    // w tablicy o indeksie 1 jest tablica przechowująca tablicę int 3 elementową
    array[1][0] = 4; 
    array[1][1] = 5;
    array[1][2] = 6;
    return 0;
}
```

Definiowanie i przypisanie wartości tablicy wielowymiarowej.

```c
char chararray[3][2] = \{{'a','b'},
                            {'c','d'},
                            {'e','f'}\};

printf("%c",chararray[1][1]);
```

Utwórz program który przechowa dane następującej tabeli:
| 3.1 | 3.6 |
|-----|-----|
| 2.2 | 6.42|
| 3.1 | <mark>3.6</mark> |
| 3.5 | 32.6 |

Wypisz w konsoli zaznaczoną wartość używając indeksów.

### Pętle
