# Zagadnienia na kolokwium

## Zmienne

Jak tworzyć zmienne:

`<typ> <nazwa>;`

<hr>

Deklaracja a inicjalizacja - czym się różnią:

```
int a; // Deklaracja
int b = 54; // inicjalizacja
```

<hr>

Typy zmiennych:

- `int` `char` `float` `double` 

- `short` `long` `unsigned` `signed`

- `long long`

<hr>

Definiowanie stałych `const` lub #define

<hr>

Nazwy zmiennych jak definiować:
 - alias musi składaćsię z liter
 - aliad dla stałych w większości jezyków programowania składa się z wielkich liter
- nie używać słów kluczowych do tworzenia aliasów
- nazwa zmiennej powinna sugerować do czego będzie służyć dana zmienna np przechowania wartości liczby pi
- nie używamy polskich znaków przy tworzeniu aliasów(najlepiej wykorzystywać angielskie nazwy)
- aliasy tworzymy zaczynajac z małej litery i wykorzystujemy jedną z przyjętych konwencji konsekwentnie w całym programie np.: camelCase snake_case

<hr>

Zakresy zmienncyh jak sprawdzić <limits.h> <float.h>

<hr>

Co się stanie gdy przekroczymy zakres zmiennej?

<hr>

Jak sprawdzić rozmiar zmiennej: sizeof()

int *a;

char *b;

float *c;

printf("%i", sizeof(a) == sizeof(b))

<hr>

Zakres dostępności zmiennej

<hr>

### tablice

Jak definiować tablice jedno wymiarotwe:

`<typ danych które przechowuje> <alias>[<rozmiar tablicy>]`
<hr>
Czym jest alias do zmiennej tablicowej? Jak wypisać kolejne elementy tablicy? Jak wypisać wartość aliasu so zmiennej tablicowej?

<hr>

Jak definiwoać talblice wielowymiarowe?

`<typ danych które przechowuje> <alias>[<rozmiar tablicy>] [<rozmiar tablicy>]`

<hr>

Co przechowuje tablica znaków zdefiniowana w poniższy sposób w pamięci komputera?

`char tab[]= "tablica znakow";`

<hr>

### wskaźniki

czym są wskaźniki?

<hr>

Jak definiujemy zmienną wskaźnikową?

`<typ na jaki będziemy wskazywać> *<alias>;`

<hr>

Jak wypisać wskaźnik?

`printf("%p", alias do wskaźnika);`

<hr>

Jak przypisać wartość do zmiennej wskaźnikowej?

```c
int b = 42; // zmienna

int *a; // wskaźnik
printf("%i", a);

a = &b;
printf("%p", &b);
printf("%p", a);

*a = 77;
printf("%i", *a);
printf("%i", b);
```

<hr>

## Instrukcje warunkowe

```c
if(print()){

}
```



```c
int myprintf(char tab[]){
    for(int i=0;tab[i] != 0;i++){
        printf("%c", tab[i]);
    }
}

int myprintf(char * tab){
    for(int i=0;tab[i] != 0;i++){
        printf("%c", tab[i]);
    }
}

int myprintf(char * tab){
    for(char *i = tab;*i;i++){
        printf("%c", *i);
    }
}

int main(){

    char tab[] = "abc\0";
    return 0;
}
```


## Pętle

## Funkcje

## Struktury i unie

## Biblioteki standardowe

## Dynamiczna alokacja pamięci
