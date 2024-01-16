# PWJC

Powtórzenie

## Pliki nagłówkowe - header files .h

Pliki nagłówkowe w języku C to pliki, które zawierają prototypy funkcji (deklaracje funkcji bez ciała), makra (stałe), struktury i inne elementy, które są używane w programie głównym lub innych plikach źródłowych. Oto kilka kluczowych rzeczy dotyczących plików nagłówkowych w C:

1. Zazwyczaj pliki nagłówkowe mają rozszerzenie ".h", co ułatwia ich identyfikację (przyjęto taką konwencję nazewnictwa).

2. Plik nagłówkowy może zawierać deklaracje funkcji, definicje makr, struktury, a także deklaracje zmiennych globalnych.

```c
// Przykład pliku nagłówkowego "moj_program.h"
#ifndef MOJ_PROGRAM_H
#define MOJ_PROGRAM_H

// Deklaracja funkcji
void moja_funkcja(int x, int y);

// Deklaracja makra
#define STALA 10

// Deklaracja makra 2
#define ADD(x) (x + x)

// Deklaracja struktury
struct MojaStruktura {
    int a;
    char b;
};

#endif  // MOJ_PROGRAM_H
```
!Jeśli definicja funkcji moja_funkcja znajduje się w pliku moj_program.c podczas kompilacji należy dodać pliki źródłowe do jej implementacji np.:

```
gcc main.c -o main moj_program.c
```

3. Plik nagłówkowy jest inkludowany w pliku programu głównego za pomocą dyrektywy #include.

```c
// Przykład inkluzji pliku nagłówkowego w programie głównym "main.c"
#include "moj_program.h"

int main() {
    // Wywołanie funkcji z pliku nagłówkowego
    moja_funkcja(5, 8);

    // Użycie makra z pliku nagłówkowego
    int wynik = STALA * 2;

    return 0;
}
```

4. Aby zapobiec wielokrotnemu inkludowaniu, używa się dyrektywy #ifndef (jeśli niezdefiniowane) i #define wraz z dyrektywą #endif na końcu pliku nagłówkowego.

```c
// moj_program.h
#ifndef MOJ_PROGRAM_H // oznacza "if not defined" (jeśli niezdefiniowane) MOJ_PROGRAM_H wykonaj instrukcje do #endif.
#define MOJ_PROGRAM_H // Definiuje symbol MOJ_PROGRAM_H (jeśli będę próbował wczytać ten plik nagówkowy w innym pliku źródłowym tego samego programu #ifndef zapobiegnie wtedy wczytaniu tego pliku)

// Kod pliku nagłówkowego (deklaracje, definicje)

#endif  // MOJ_PROGRAM_H
```

5. Pliki nagłówkowe zawierają jedynie deklaracje, a definicje są umieszczane w plikach źródłowych (.c).

6. Pliki nagłówkowe pozwalają na oddzielenie interfejsu (deklaracji) od implementacji (definicji). Interfejs jest dostępny dla klientów (innych fragmentów kodu), podczas gdy implementacja pozostaje ukryta. To wspiera enkapsulację i utrzymanie prywatności implementacji.

## Identyfikatory


W języku C, identyfikator jest terminem odnoszącym się do nazwy używanej w celu identyfikacji zmiennej, funkcji lub innego elementu zdefiniowanego przez programistę. Zgodnie z zasadami języka, identyfikator zaczyna się od litery A do Z, a do z, lub znaku podkreślenia '_', po którym może następować zero lub więcej liter, podkreślników i cyfr (0 do 9). Znaki interpunkcyjne, takie jak @, $ i %, są niedozwolone w identyfikatorach. Ponadto, C jest językiem wrażliwym na wielkość liter, co implikuje, że identyfikatory z różną wielkością liter są traktowane jako odrębne. Przykładowo, `MojaFunkcja` i `mojaFunkcja` są rozróżniane jako dwa odrębne identyfikatory w języku C. Przykłady poprawnych identyfikatorów obejmują zmienna, NazwaFunkcji, _mojaZmienna, licznik123. Z kolei błędne identyfikatory to np. 3zmienna, @wartosc, moja-zmienna, C++Identyfikator.

Ponadto jako nazw zmiennych nie używa się poniższych słów kluczowych:
```c
+-----------+---------+------------+------------+------------+
| auto      | else    | long       | switch     | break      |
+-----------+---------+------------+------------+------------+
| enum      | register| typedef    | case       | extern     |
+-----------+---------+------------+------------+------------+
| char      | float   | short      | unsigned   | const      |
+-----------+---------+------------+------------+------------+
| for       | signed  | void       | continue   | goto       |
+-----------+---------+------------+------------+------------+
| default   | if      | static     | while      | do         |
+-----------+---------+------------+------------+------------+
| int       | struct  | _Packed    | double     | sizeof     |
+-----------+---------+------------+------------+------------+
| volatile  | default | if         | static     | while      |
+-----------+---------+------------+------------+------------+
```

## Biblioteki

[Biblioteka standardowa](https://pl.wikibooks.org/wiki/C/Biblioteka_standardowa/Indeks_tematyczny)

### Zadanie 1

Biblioteki które nalezy wykorzystać:
- [<limits.h>](https://en.wikibooks.org/wiki/C_Programming/limits.h)
- [<float.h>](https://en.wikibooks.org/wiki/C_Programming/float.h)

Napisz program który wypisze dla typów:
- short
- long long unsigned int
- long double

Liczbę bajtów którą zajmują w pamięci oraz minimalną i maksymalną wartość jaką mogą przechować w systemie.

### Zadanie 2

Biblioteki które nalezy wykorzystać:
- `<ctype.h>`
- `<string.h>`

Napisz program w języku C, który przyjmuje od użytkownika dowolny tekst (zdanie lub krótki paragraf) i wykonuje następujące czynności:

- Policz liczbę słów w tekście.
- Zamień wszystkie litery na małe litery.
- Policz, ile razy występuje każda litera w tekście.
- Usuń wszelkie znaki interpunkcyjne z tekstu.
- Wyświetl oczyszczony tekst oraz wyniki analizy.

```yaml
Podaj tekst do analizy:
To jest przykładowe zdanie. Czy potrafisz je zanalizować?

Analiza tekstu:
Liczba słów: 10
Tekst po zamianie na małe litery: to jest przykładowe zdanie. czy potrafisz je zanalizować?
Wystąpienia liter:
a: 5
b: 1
c: 3
d: 2
e: 6
f: 2
i: 4
j: 3
k: 2
l: 3
n: 4
o: 5
p: 2
r: 4
s: 5
t: 6
w: 2
y: 1
z: 1
Tekst po usunięciu znaków interpunkcyjnych: to jest przykładowe zdanie czy potrafisz je zanalizować
```

W tym zadaniu będziesz musiał użyć funkcji takich jak strlen, isalpha, tolower, strtok, strchr, printf, itp.

### Zadanie 3

Biblioteki które nalezy wykorzystać:
- `<time.h>`

Dane są dwie funkcje obliczające wartość ntego elementu ciągu fibbonaciego:

```c
int fibonacciRecursion(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
    }
}


int fibonacciIteration(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}
```

Zmierz czas potrzebny na znalezienie 10, 50, 100 elementu ciągu. Która funkcja działa szybciej?

### Zadanie 4

Biblioteki które nalezy wykorzystać:
- `<stdlib.h>`

Napisz program w języku C, który wczytuje z pliku tekstowego ciąg liczb całkowitych, konwertuje je na liczby, a następnie oblicza ich sumę.

Przykładowy plik file.txt:

```
123 45 -67
89
-12 0 987
```

Wynik działania programu:
```
1165
```


### Zadanie 5

Pobierz i uruchom poniższy projekt w Visual Studio Code(wzorując się na poprzedniej instrukcji [LAB7](https://c.lazysolutions.pl/instructions2/Lab007/battleships.html)):

[VSCode.zip](VSCode.zip)

### Zadanie 6

Biblioteki które nalezy wykorzystać:
- `<stdlib.h>`

Funkcja `canPlaceShip()` służy do sprawdzania, czy na planszy możliwe jest umieszczenie statku o określonym rozmiarze w danym miejscu, z określonym kierunkiem (pionowo lub poziomo). 

Argumenty funkcji:
- board[BOARD_SIZE][BOARD_SIZE]: Dwuwymiarowa tablica reprezentująca planszę, gdzie statki mogą być umieszczane.
- row, col: Współrzędne (wiersz, kolumna), gdzie rozpoczyna się próba umieszczenia statku.
- shipSize: Rozmiar statku, czyli ilość zajmowanych pól.
- direction: Kierunek umieszczenia statku (0 - poziomo, 1 - pionowo).

Działanie funkcji:
1. Sprawdzenie granic planszy:
    - Funkcja sprawdza, czy umieszczenie statku nie wykracza poza granice planszy w danym kierunku.
2. Sprawdzenie kolizji z istniejącymi statkami:
    - Dla statków ustawianych poziomo (kierunek 0):
        - Sprawdza trzy rzędy (row - 1, row, row + 1) i zakres kolumn od col - 1 do col + shipSize + 1.
        - Jeśli w tym obszarze znajduje się zajęte pole, funkcja zwraca false, co oznacza, że umieszczenie statku jest niemożliwe.
    - Dla statków ustawianych pionowo (kierunek 1):
        - Sprawdza trzy kolumny (col - 1, col, col + 1) i zakres wierszy od row - 1 do row + shipSize + 1.
        - Jeśli w tym obszarze znajduje się zajęte pole, funkcja zwraca false.
3. Zwrócenie wyniku:
    - Jeśli żadne z powyższych warunków nie zostało spełnione, funkcja zwraca true, co oznacza, że umieszczenie statku w danym miejscu jest możliwe.

Dodatkowe informacje:
- Funkcja wykorzystuje printf do wypisywania komunikatu w przypadku niemożliwości umieszczenia statku w danym miejscu.
- Mimo że funkcja może wydawać się skomplikowana, jej głównym zadaniem jest zapewnienie, że umieszczanie statków na planszy odbywa się zgodnie z zasadami gry w statki, bez kolizji między statkami.

W pliku main.c odnajdź funkcję `placeRandomShip()`. Wykorzystaj funkcję `canPlaceShip()` w następujący sposób:

Zainicjalizuj zmienne row, col, direction;

W nieskończonej pętli losuj row, col, direction dopóki nie zostanie znalezione miejsce na planszy umożliwiające postawienie statku.

https://pl.wikibooks.org/wiki/C/rand

Jeśli znajdziesz współrzędne umożliwiające postawienie statku. Zmień odpowiednio status pola `board` na SINGLE_DECKER ... FOUR_DECKER

### Zadanie 7

Wzorując się na poniższym przykładzie, spróbuj przenieść struktury z pliku main.c do pliku gameHeader.h Jeśli to możliwe utwórz też prototypy funkcji w pliku gameHeader.h oraz przenieś ich implementacje do gameHeader.c

!Podczas kompilacji należy wskazać plik źródłowy zawierający imeplentacje funkcji.


### MyStruct.h
```c
#ifndef MYSTRUCT_H
#define MYSTRUCT_H

// Struktura reprezentująca przykładowe dane
struct MyStruct {
    int id;                   // Unikalny identyfikator
    char name[50];            // Nazwa, ograniczona do 50 znaków
    float value;              // Wartość liczbowa
};

#endif
```

### main.c
```c
#include <stdio.h>
#include "MyStruct.h"

int main() {
    // Utworzenie instancji struktury MyStruct
    struct MyStruct exampleStruct;

    // Przykładowe użycie struktury
    exampleStruct.id = 1;                                       // Przypisanie wartości do pola id
    snprintf(exampleStruct.name, sizeof(exampleStruct.name),    // Przypisanie wartości do pola name
             "Example Name");
    exampleStruct.value = 3.14;                                  // Przypisanie wartości do pola value

    // Wyświetlenie danych ze struktury
    printf("ID: %d\n", exampleStruct.id);
    printf("Name: %s\n", exampleStruct.name);
    printf("Value: %f\n", exampleStruct.value);

    return 0;
}
```

### Zadanie 8

Biblioteki które nalezy wykorzystać:
- `<stdio.h>`

Dodaj do programu zapis historii rozgrywki do pliku tekstowego, a także obecnego stanu do pliku binarnego, po zamknięciu programu w środku rozgrywki. Przy uruchomieniu wczytaj stan rozgrywki z pliku binarnego. Jeśli nie pamiętasz zagadnień związanych z zapisem i odczytem z pliku wróć do pliku LAB9 na platformie ms teams.

ZAPIS:

```c
#include <stdio.h>

int main() {
    // Zmienna do zapisu
    int myVariable = 42;

    // Otwarcie pliku do zapisu binarnego
    FILE *file = fopen("moj_plik.bin", "wb");

    // Sprawdzenie czy plik został otwarty poprawnie
    if (file == NULL) {
        fprintf(stderr, "Błąd otwarcia pliku do zapisu binarnego.\n");
        return 1; // Zakończenie programu z błędem
    }

    // Zapis binarny zmiennej do pliku
    fwrite(&myVariable, sizeof(myVariable), 1, file);

    // Zamknięcie pliku
    fclose(file);

    return 0;
}
```

Odczyt:

```c
#include <stdio.h>

int main() {
    // Zmienna do odczytu
    int myVariable;

    // Otwarcie pliku do odczytu binarnego
    FILE *file = fopen("moj_plik.bin", "rb");

    // Sprawdzenie czy plik został otwarty poprawnie
    if (file == NULL) {
        fprintf(stderr, "Błąd otwarcia pliku do odczytu binarnego.\n");
        return 1; // Zakończenie programu z błędem
    }

    // Odczyt binarny zmiennej z pliku
    if (fread(&myVariable, sizeof(myVariable), 1, file) != 1) {
        fprintf(stderr, "Błąd odczytu zmiennej z pliku binarnego.\n");
        return 1; // Zakończenie programu z błędem
    }

    // Zamknięcie pliku
    fclose(file);

    // Wyświetlenie odczytanej wartości
    printf("Odczytana wartość: %d\n", myVariable);

    return 0;
}
```


