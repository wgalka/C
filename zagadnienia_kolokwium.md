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

Jak działa `break` oraz `continue`.

```c
for(int i = 0; i<10;i++){
    
    if(i==0){
        break;
    }
    printf("%i", i);
}
```

```c
for(int i = 0; i<10;i++){
    
    if(i==0){
        continue;
    }
    printf("%i", i);
}
```

## Funkcje

```
[typ zwracany] [nazwa funkcji]([typ parametru] [nazwa], [typ parametru] [nazwa], ...){
    \\ ciało funkcji
}
```

`void` - funkcja nic nie zwraca (return;)

w pozostałych przypadkach przy słówku `return` musi być wartość odpowiedniego typu.

## Struktury, unie, typ wyliczeniowy 

Tworzenie struktury

```c
struct [tag struktury]{
    [typ zmiennej] [nazwa zmiennej];
    [typ zmiennej] [nazwa zmiennej];
    [typ zmiennej] [nazwa zmiennej];
    [typ zmiennej] [nazwa zmiennej];
    ...

}
```

Odczytywanie i przypisywanie wartości do pola struktury:

```c
typedef struct Trojkat{
    int bok1;
    int bok2;
    int bok3;
} trojkat;

int setBok1(trojkat *structWsk,int bok1){
    structWsk->bok1 = 3;
}

int main(){
    trojkat xd = {1,2,3};

    trojkat var2 = {3,4,5};

    xd.bok3 = 1; // przypisanie wartosci do pola bok1

    var2.bok1 = 4;
    printf("%i",var2.bok1)
    return 0;
}
```

Definiowanie Uni:

```c
union [tag uni]{
    [typ zmiennej] [nazwa zmiennej];
    [typ zmiennej] [nazwa zmiennej];
    [typ zmiennej] [nazwa zmiennej];
    ...
};
```

```c
typedef union Przyklad1{
    int a;
    float b;
    char c;
} przyklad1;

int main(){
    przyklad1 a;
    przyklad.a = 4321;
    printf("%i", przyklad1.a);
    przyklad.b = 3.14;
    printf("%i", przyklad1.a);
    return 0
}
```

Unie i struktury możemy zagnieżdżać. 

```c
typedef union Przyklad1{
    int a;
    float b;
    char c;
} przyklad1;

typedef struct Trojkat{
    int bok1;
    int bok2;
    int bok3;
} trojkat;

typedef struct Struktura5{
    przyklad1 a;
    trojkat b;
} struktura5;

int main(){

    struktura5 a;
    a.b.bok1 = 5;
    return 0;
}
```

Typ wyliczeniowy

```c
enum plec{
    MALE, // przechowuje wartość 0
    FEMALE // przechowuje wartość 1
};

int main(){
    enum plec var1;
    var1 = MALE;
    printf("%i", var1);

    switch(var1):
    case MALE: // Łatwo zrozumieć program - warunek wykona się gdy var1 jest mezczyzna
        break;
    case FEMALE:
        break;
    return 0;
}
```


## Biblioteki standardowe

## Dynamiczna alokacja pamięci
