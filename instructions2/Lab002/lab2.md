# Programowanie w Języku C. Lab. 2

## Odczyt ze standardowego wejścia - scanf()

Do stworzenia programu w którym użytkownik może wpisać wartość a następnie zostanie ona zapisana w zmiennej służy funkcja `scanf()` zawarta w bibliotece `<stdio.h>`. Aby zrozumieć jak działa potrzebna jest wiedza na temat wskaźników.

**wskaźnik**

Zmienne które deklarujemy mają pewien adres w pamięci. Aby odczytać ten adres należy użyć operatora `&`.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;

    printf("Zmienna a znajduje sie pod adresem: |%p|", &a);
}
```

Możemy deklarować zmienne które będą przechowywać taki adres za pomocą `*` - jest to wskaźnik (zmienna przechowująca adres). Ważne jest poprawne zdefiniowanie typu danych które będą pod danym adresem w pamięci - typ jest taki sam jak typ zmiennej. Deklaracja zmiennej wskaźnikowej wygląda następująco: `[typ danych] *[nazwa zmiennej wskaznikowej];`

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;

    printf("Zmienna a znajduje sie pod adresem: |%p|", &a);

    // inicjalizacja - deklaracja i przypisanie wartości. W typ przypadku adresu zmiennej a.
    int *wsk_a = &a;

    printf("Zmienna a znajduje sie pod adresem: |%p|", wsk_a);
}
```

Używając na zmiennej wskaźnikowej operaotra `*` możemy dostać się do wartości przechowywanej pod adresem przechowywanym przez wskaźnik lub zmienić jej wartość.

```c
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
```

**funkcja scanf()**

Funkcja `scanf()` przyjmuje następujące argumenty `scanf([format], [wskaźnik do zmiennych w których zostaną zapisane wartości])` i jej zadaniem jest zapisanie wartości wpisanej przez użytkownika pod wskazany adres w pamięci. Ważne jest tu wskazanie poprawnego typu w łańcuchu znaków wskazującym format.
Wskazanie typu odczytywanych danych jest bardzo podobne do funkcji `printf()`. Dostępne opcje można znaleźć pod tym linkiem: [link](https://pl.wikibooks.org/wiki/C/scanf#:~:text=wska%C5%BAnik%20na%20wchar_t.-,Format,-%5Bedytuj%5D).

Poniżej kod programu który odczytuje znaki ze standardowego wejścia za pomocą funkcji scanf() w której też odbywa się konwersja do liczby całkowitej oraz przypisanie przekonwertowanej wartości do zmiennej a. Na koniec wartość zmiennej a zostaje wypisana.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Podaj wartosc a:");
    scanf("%i", &a); //
    printf("wartosc a wynosi: %i", a);

    system("PAUSE");
    return EXIT_SUCCESS;
}
```



## Tablice

Tablica w języku C to struktura danych, która pozwala na przechowywanie wielu elementów o tym samym typie w jednym miejscu w pamięci. Tablica ma stały rozmiar, który musi być zadeklarowany podczas jej tworzenia. Elementy w tablicy są indeksowane, a dostęp do nich odbywa się za pomocą numeru indeksu. Indeksy w tablicy zaczynają się od zera (0), więc pierwszy element ma indeks 0, drugi element ma indeks 1, i tak dalej.

**Deklaracja tablicy**

Tablicę deklarujemy w jastępujący sposób: `[typ przechowywanych danych] [alias][[liczba elementow tablicy]];` np. `int tab[3];` utworzy tablicę dla 3 liczb całkowitych.

Można dokonać inicjalizacji tablicy. **W przypadku liczb całkowitych stosujemy znaki `{}`** pomiędzy króre wpisuje się wartości liczbowe oddzielone przecinkiem np. `float floatTab[30] = {1.1, 1.2, 1.3};` utworzy tablicę 30 liczb zmienno przecinkowych jednak tylko 3 pierwsze elementy zostaną zainicjalizowane, reszta będzie wartościami 0.

**W przypadku tablic znaków czyli tak zwanych `string` inicjalizacja tablicy odbywa się za pomocą `""`.** w następujący sposbób: `char charTab[10] = "Adam";` utworzy tablicę 10 znaków z których pierwsze 4 miejsca w tablicy zostaną uzupełnione literami Adam natomiast reszta elementów to znaki puste `\0`.

**Jeśli inicjalizując `string` nie podamy ilości znaków w tablicy np. `char tab[] = "Adam";`, rozmiar takiej tablicy zostanie automatycznie ustawiony na 5. Ostatnim znakiem będzie znak null czyli `\0` (dzięki temu wiemy kiedy przestać wypisywać znaki z łańcucha znaków).**

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


**odczytywanie wartości z tablicy**

Indeksy w tablicy zaczynają się od 0. Deklarując tablicę o długości 3 (`int tab[3];`) będzie ona mieć następujące indeksy kolejnych wartości w tablicy: 0, 1, 2. Aby odczytać wartość elementu pod danym indeksem należy podać nazwę zmiennej, po czym w nawiasach [] podać index elementu który chcemy odczytać.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3] = {1, 2, 3};

    printf("wartosc 2 elementu tablicy (indeks 1) to: |%i| \n", tab[1]);

    system("PAUSE");
    return EXIT_SUCCESS;
}
```

Wartość jednego z elementów możemy przypisać do zmiennej.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3] = {1, 2, 3};

    int odczytanawartosc = tab[1]
    printf("wartosc 2 elementu tablicy (indeks 1) to: |%i| \n", odczytanawartosc);

    system("PAUSE");
    return EXIT_SUCCESS;
}
```


**zmiana wartości w tablicy**

Aby zmienić wartość elementu w tablicy należy użyć operatora przypisania.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3] = {1, 2, 3};

    printf("wartosc 2 elementu tablicy (indeks 1) to: |%i| \n", tab[1]);

    tab[1] = 3;

    printf("wartosc 2 elementu tablicy (indeks 1) po zmianie: |%i| \n", tab[1]);

    system("PAUSE");
    return EXIT_SUCCESS;
}
```

### Zadanie 1

utwórz tablicę przechowującą liczby 7, 8, 9 i Wypisz wszystkie jej elementy.


Utwórz drugą tablicę przechowującą `string`(ciąg znaków) "Ada ma kota." i wypisz zawartość tablicy.
Program odczytuje od użytkownika indeks a potem znak który zostaje wpisany w dane miejsce pod danym indeksem.

**Wfunkcji scanf() aby pobrać znak należy wpisać " %c"**

```
789
Podaj indeks: 1
Podaj znak: l
Ala ma kota.
```


## Operatory 

**Operatory porównania**

Operatory logiczne są 

|Symbol  | Działanie                       |
|--------|---------------------------------|
| ==     | sprawdzenie czy wartości po obu stronach są **`takie same`** |
| !=     | sprawdzenie czy wartośći po obu stronach są **`różne`** | 
| <      | sprawdzenie czy **wartość po lewej stronie jest `mniejsza` od wartości po prawej** stronie |
| >      | sprawdzenie czy **wartość po lewej stronie jest `większa` od wartości po prawej** stronie|
| <=     | sprawdzenie czy **wartość po lewej stronie jest `mniejsza lub równa` od wartości po prawej** stronie                                |
| >=     | sprawdzenie czy **wartość po lewej stronie jest `większa lub równa` od wartości po prawej** stronie |

Poniższy przykład prezentuje wynik działania wszystkich operatorów logicznych porównując liczby 3 oraz 5.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 5;

    printf("3 == 5 - %i", a == b);
    printf("3 != 5 - %i", a != b);
    printf("3 < 5 - %i", a < b);
    printf("3 > 5 - %i", a > b);
    printf("3 <= 5 - %i", a <= b);
    printf("3 >= 5 - %i", a >= b);
}
```

**Operatory arytmetyczne**

|Symbol | Działanie                       |
|-------|---------------------------------|
| +     | dodawanie |
| -     |  odejmowanie                        |
| *     |  mnożenie                     |
| /     |  dzielenie                        |
| %     |  reszta z dzielenia (modulo)                       |

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    int b = 5;
    printf("%i + %i = %i\n", a, b, a + b);
    printf("%i - %i = %i\n", a, b, a - b);
    printf("%i * %i = %i\n", a, b, a * b);
    printf("%i / %i = %i\n", a, b, a / b);
    printf("%i %% %i = %i\n", a, b, a % b);
    system("PAUSE");
    return EXIT_SUCCESS;
}
```


## Pętle

W języku C pętla to konstrukcja, która umożliwia wielokrotne wykonywanie określonych instrukcji lub bloków kodu. Działanie pętli opiera się na sprawdzaniu warunku i powtarzaniu wykonywania kodu, dopóki warunek jest spełniony. Istnieją trzy główne rodzaje pętli w języku C: [for](https://pl.wikibooks.org/wiki/C/Instrukcje_steruj%C4%85ce#while:~:text=nie%20do%2010.-,for,-%5Bedytuj%5D), [while](https://pl.wikibooks.org/wiki/C/Instrukcje_steruj%C4%85ce#while:~:text=%5Bedytuj%5D-,while,-%5Bedytuj%5D) i [do-while](https://pl.wikibooks.org/wiki/C/Instrukcje_steruj%C4%85ce#while:~:text=%2B%2Bi.-,do..while,-%5Bedytuj%5D).

Pętlę w programie definiujemy w następujący sposób `for([inicjalizacja];[warunek końcowy];[aktualizacja]){[kod który ma się wykonać wielokrotnie]}`
- **[inicjalizacja]** - tutaj należy zadeklarować stan początkowy zmiennej np. `int i = 0`
- **[warunek końcowy]** - wyrażenie zwracające wartość logiczną true(liczby większe od 0) lub false(liczba 0) które będzie sprawdzać czy należy już zakończyć działanie pętli np. `i<10` będzie sprawdzać czy `i` jest mniejsze od 10. Jeśli będzie to wyrażenie zwróci wartość 1 po czym wykona się blok kodu zdefiniowany w `{}`. Jeśli warunek zwróci wartość 0 to działanie pętli zostanie przerwane.
- **[aktualizacja]** - aktualizacja wartośći zmiennej prowadząca to tego aby warunek końcowy został osiągnięty. Najczęściej jest to zwiększanie wartości zmiennej i o 1. Najczęściej aktualizacja to np. `i= i+1`.

Przykładowa pętla wypisująca wartości od 1 do 5:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; // inicjalizacja zmiennej
    for (i = 1; i < 6; i=i+1)
    // przed wykonaniem kodu sprawdzany jest warunek końcowy - czy zmienna i jest mniejsza od 6.
    {
        printf("%i", i); // wypisanie wartości zmiennej i.
        // Po wypisaniu wykonuje się aktualizacja. W tym przypadku zwiększenie wartości i o 1 co zapisano i++
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
```