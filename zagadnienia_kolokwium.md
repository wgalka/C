# Zagadnienia na kolokwium

## Zmienne

Jak tworzyć zmienne.

Typy zmiennych:

- `int` `char` `float` `double` 

- `short` `long` `unsigned` `signed`

- `long long`

Definiowanie stałych `const` lub #define

Nazwy zmiennych jak definiować:
 - alias musi składaćsię z liter
 - aliad dla stałych w większości jezyków programowania składa się z wielkich liter
- nie używać słów kluczowych do tworzenia aliasów
- nazwa zmiennej powinna sugerować do czego będzie służyć dana zmienna np przechowania wartości liczby pi
- nie używamy polskich znaków przy tworzeniu aliasów(najlepiej wykorzystywać angielskie nazwy)
- aliasy tworzymy zaczynajac z małej litery i wykorzystujemy jedną z przyjętych konwencji konsekwentnie w całym programie np.: camelCase snake_case

Zakresy zmienncyh jak sprawdzić <limits.h> <float.h>

Co się stanie gdy przekroczymy zakres zmiennej?

Jak sprawdzić rozmiar zmiennej: sizeof()

### tablice

Jak definiować tablice jedno wymiarotwe:

`<typ danych które przechowuje> <alias>[<rozmiar tablicy>]`

Czym jest alias do zmiennej tablicowej? Jak wypisać kolejne elementy tablicy? Jak wypisać wartość aliasu so zmiennej tablicowej?

Jak definiwoać talblice wielowymiarowe?


`<typ danych które przechowuje> <alias>[<rozmiar tablicy>] [<rozmiar tablicy>]`

Co przechowuje tablica znaków zdefiniowana w poniższy sposób w pamięci komputera?
`char tab[]= "tablica znakow";`


### wskaźniki

czym są wskaźniki?

Jak deciniujemy wskażnik?

`<typ na jaki będziemy wskazywać> *<alias>;`

Jak wypisać wskaźnik?

printf("%p", alias do wskaźnika);

Jak przypisać wartość do zmiennej wskaźnikowej?

int b = 42;
int *a;

a = &b;
*a = 77;

printf("%i", b);


## Instrukcje warunkowe

## Pętle

## Funkcje

## Struktury i unie

## Biblioteki standardowe