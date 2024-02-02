---
title: C - kolokwium 2
layout: default
---

# C - kolokwium 2

Pliki *CSV* (Comma-Separated Values) to format przechowywania danych, w którym zazwyczaj pierwsza linia zawiera nazwy kolumn gdzie wartości są oddzielone `,`:

<div class="codeblock-label">example.csv</div>

```yaml
kolumna A, Kolumna B, Kolumna C, Kolumna D
```
Kolejne linie w pliku *CSV* zawierają dane, które również oddzielone są separatorem `,`:

<div class="codeblock-label">example.csv</div>

```yaml
kolumna A, Kolumna B, Kolumna C, Kolumna D
1, A, 3, 4.0
2, B, 3, 4.0
3, C, 3, 5.0
```


 Pliki CSV mogą również używać innych separatorów, takich jak średnik np. `;`,`|` lub `\t`.

 <div class="codeblock-label">example.csv</div>

```yaml
kolumna A; Kolumna B; Kolumna C; Kolumna D
1; A; 3; 4.0
2; B; 3; 4.0
3; C; 3; 5.0
```

**Zadanie będzie polegać na stworzeniu biblioteki umożliwiającej wczytanie pliku CSV, wykonanie okreslonych operacji na wczytanym pliku oraz zapis rezultatów.**

## Krok 1 - Przechowywanie danych

Znając strukturę pliku CSV należy wymyśleć sposób przehcowywania danych w pamięci komputera z wykorzytsaniem podstawowych konstrukcji języka C.

Wiemy że pierwsza linia odczytanego pliku to nagłówek i skłąda się on z `n` łańcuchów znaków gdzie `n` to liczba kolumn. Łańcuch znaków jest to tablica przechowująca typ `char`. Zatem aby przechować nagłówek będzie potrzebne `n` tablic zdolnych przechować wszystkie znaki z poszczególnych nazw kolumn. Dla uproszczenia wstępnie możemy przyjąć założenia że liczba kolumn nie przekroczy 10 a liczba znaków w nazwie kolumny 100 znaków. Z tymi założeniami możemy utworzyć zmienną przechowującą nasz nałówek w następujący sposób:

<div class="codeblock-label">main.c</div>

```c
char header[10][100] = {'\0'}; // 10 kolumn po 100 znaków. {'\0'} uzupełnia tablicę wartościami pustymi.
```

Kolejne linie przechowują dane. Zazwyczaj są to wartości liczbowe stąd dla ułatwienia przyjmiemy że wartość w każdej komórce jest typu `double` który umożliwi przechowanie wartości zarówno całkowitych jak i zmienno przecinkowych oraz stosunkowo precyzyjne operacje arytmetyczne na danych.

W jednej linii pliku `CSV` jest przechowywane założone 10 wartości(10 kolumn). Plik ma `m` linni. Dla ułatwienia możemy przyjąć że nasz plik z danymi może maksymalnie mieć 1000 lini. Stąd aby przechować dane najprostszym sposobem jest stworzenie tablicy którą możemy zadeklarować w poniższy sposób:

<div class="codeblock-label">example.csv</div>

```c
double data[10][1000] = {0.0};
```

Jeśli nasz program miałby wczytać więcej niż jeden plik `CSV` możemy zorganizować powstałe zmienne w strukturę o przykładowej nazwie `DataMatrix`.

### Zadanie

Utwórz plik nagłówkowy `csvreader.h`. W pliku utwórz strukturę `DataMatrix` będącą w stanie przechować zawartość pliku *CSV* zakładając podane wcześniej ograniczenia.
Utwórz plik `main.c` w którym jest zaimportowany plik nagłówkowy `csvreader.h`. Utwórz zmienną `matrix` typu `DataMatrix`. 

Wypełnij strukturę tak aby nagłówek przechowywał nazwy kolumn: col A, col B, col C 
oraz dwa wiersze wartośći:

```yaml
1.0, 2.0, 3.0
6.0, 5.0, 4.0
```
Utwórz funkcję `void printmatrix(DataMatrix matrix)` która wypisze zawartość macierzy w poniższej postaci:

```yaml
col A   col B   col C
1.00    2.00    3.00
6.00    5.00    4.00
```
**Przetestuj działanie struktury wypisując jej zawartość za pomocą utworzonej funkcji. Upewnij się że wszystko działa prawidłowo modygikując watyość 1.0 na 6.0 i wypisując nową zawartość struktury.**



## Krok 2 - wczytanie danych

Tutaj pojawią się następujące trudności:
1. wczytanie pliku
2. podział odczytanej linni w pliku na mniejsze łańcuchy znaków (według separatora)
3. zamiana łańcucha znaków na liczbę

**Zacznijmy od punktu 2.** 

### Zadanie

Uzupełnij poniższy kod według wskazówek:

<div class="codeblock-label">my_strtok.c</div>

```c
#include <stdio.h>
#include <string.h>

int main()
{
    // Zakładamy że to linia oczytana z pliku CSV
    char line[] = "kolumna A, Kolumna B, Kolumna C";

    // bufor na odczytane znaki
    char buffer[100];
    // licznik dla tablicy buffer. Po napotkaniu ',' będzie zerowany.
    int buffer_counter = 0;
    // teraz będziemy iterować po wszystkich znakach ze zmiennej line
    // pętla zakończy działąnie gdy dojdziemy do znaku '\0'
    for (char *i = line; *i != '\0'; i++)
    {   
        if () // TODO Sprawdzenie, czy bieżący znak to przecinek
        {
            // TODO Zakończenie łańcucha znaków znakiem '\0' (buffer[buffer_counter])

            // wypisz zawartość buforu
            printf("%s\n", buffer);

            // TODO wyzeruj buffer_counter
            
            // TODO przejdź do następnej iteracji
        
        }

        // TODO przypisz wartość *i do buffer[buffer_couter]
       
        // TODO zwiększ buffer_counter o 1
       
    }
    //TODO Zakończenie buforu znakiem '\0'
    
    // wypisanie ostatniego łańcucha znaków
    printf("%s", buffer);

    return 0;
}
```

Powyższy sposób jest jednym z wielu na rozwiązanie problemu podziału zdania według zadanego symbolu.
W bibliotece `<string.h>` istnieje funkcja `strtok()` implementująca rozwiązanie tego problemu.
Poniższy kod pokazuje działanie funkcji strtok z biblioteki `<string.h>`:

<div class="codeblock-label">readline.c</div>

```c
#include <stdio.h>
#include <string.h>

// Funkcja wypisuje znaki z łańcucha znaków
void custom_print(char *string, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("|%c|", string[i]);
    }
    printf("\n");
}

int main()
{
    // Zakładamy że to linia oczytana z pliku CSV
    char line[] = "kolumna A, Kolumna B, Kolumna C";

    // Wypisuje wszystkie znaki z tablicy line
    printf("line przed wywolaniem funkcji strtok\n");
    custom_print(line, 32);
    // definicja łańcucha znaków który będzie zamieniany na '\0'
    const char separator[] = ",";
    // Zmienna token będzie przechowywać wskaźnik na ostatnio znaleziony znak '\0'
    char *token = strtok(line, separator);
    printf("line po wywolaniu funkcji strtok\n");
    custom_print(line, 32);
    printf("token wskazuje na poczatek tablicy line: %p %p\n", token, line);

    while (token != NULL) // dopóki wskaźnik nie jest pusty
    {
        printf("Token: %s\n", token);

        // w tym wywołaniu funkcji strtok token będzie przechowywał wskaźnik na '\0' które było poprzednio podmienione za ','.
        // Zostanie też podmieniony kolejny znak ',' na '\0' co można zaobserować przez wywołanie cystom_print(line, 32);
        token = strtok(NULL, separator);
        // custom_print(line, 32);
        printf("token wskazuje na %p line wskazuje na %p\n", token, line);
    }

    return 0;
}
```

**Zamiana łańcucha znaków na liczbę.**

W bibliotece standardowej `<stdlib.h>` znajdziemy 3 funkcje:
- `double atof( const char * str );` - konwersja łańcucha znaków na liczbę typu `dpuble`
- `int atoi( const char * str );` - konwersja łańcucha znaków na liczbę całkowitą `int`
- `char * itoa( int value, char * str, int base );` - konwersja liczby całkowitej na łańcuch znaków
 
### Zadanie

<div class="codeblock-label">strtonumber.c</div>

```c
#include <stdio.h>
#include <stdlib.h>

void filltab(char * line, double *tab){
    // TODO implement code
}

int main(){
    char line = "123, 421, 90.032";
    double tab[3];
    filltab(line, tab)
    return 0;
}
```

Zaimplementuj funkcję `filltab()` tak aby tablica tab została uzupełniona wartościami liczbowymi z tablicy line.

**odczytanie pliku.**

Poniżej przykład kodu odczytującego zawartość pliku example.csv.

<div class="codeblock-label">main.c</div>

```c
#include <stdio.h>

int main() {
    // Otwórz plik do odczytu
    FILE *file = fopen("example.csv", "r");

    // Sprawdź, czy plik został poprawnie otwarty
    if (file == NULL) {
        perror("Nie można otworzyć pliku");
        return 1; // Zakończ program z błędem
    }
    // Wczytuj dane z pliku
    char buffer[1500]; // Tablica w której będzie pchechowywana jedna linia z pliku tekstowego (buffor)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {// dopóki nie natrafimy na znak pusty
        printf("%s", buffer); // wypisz dane wczytane do zmiennej buffer
    }
    // Zamknij plik po zakończeniu operacji
    fclose(file);

    return 0; // Zakończ program bez błędu
}
```

### Zadanie

W pliku `csvreader.h` utwórz prototyp funkcji `void readcsv(DataMatrix *mat, char *filename, char *separator);`. Następnie w pliku `readcsv.c` zaimplementuj ciało funkcji i przetestuj jej działanie.

### Zadanie

W pliku `csvreader.h` utwórz prototyp funkcji `double mean(DataMatrix *mat, char dimension, int index);`. Następnie w pliku `readcsv.c` zaimplementuj ciało funkcji tak aby zwracała średnią z wiersza jeśli dimension == 0 w wierszu określonym przez index lub zwracała średnią z kolumny jeśli dimension == 1 w kolumnie okreslonym przez index.

### Zadanie

W pliku `csvreader.h` utwórz prototyp funkcji `void edit(DataMatrix *mat, int col, int row, double value);`. Następnie w pliku `readcsv.c` zaimplementuj ciało funkcji tak aby wstawiała wartość value w danym wierszu i kolumnie.

### Zadanie 


W pliku `csvreader.h` utwórz prototyp funkcji `void matrixToFile(DataMatrix *mat, char* filename, char *separator);`. Następnie w pliku `readcsv.c` zaimplementuj ciało funkcji tak aby zapisywała wartość DataMatrix do pliku pod nazwą określoną przez filename. Wartości powinny być oddzielone przez wskazany separator.

