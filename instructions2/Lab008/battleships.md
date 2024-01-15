# PWJC

## Zadanie 1

Pobierz i uruchom poniższy projekt w Visual Studio Code(wzorując się na poprzedniej instrukcji [LAB7](https://c.lazysolutions.pl/instructions2/Lab007/battleships.html)):

[VSCode.zip](VSCODE.zip)

## Zadanie 2


Pliki nagłówkowe w języku C to pliki zawierające deklaracje funkcji, definicje struktur, preprocesorowe dyrektywy #define itp., które są używane w jednym lub wielu plikach źródłowych (plik z rozszerzeniem .c). Pliki te pomagają w organizacji i strukturyzacji kodu, umożliwiając podział projektu na logiczne jednostki i poprawiając czytelność kodu. Oto kilka kluczowych informacji o plikach nagłówkowych w C:

1. Rozszerzenie Pliku:

Pliki nagłówkowe mają zazwyczaj rozszerzenie `.h`, np., `mojplik.h`.

2. Struktura Pliku Nagłówkowego:

Pliki nagłówkowe zawierają deklaracje, a nie definicje. Oznacza to, że zawierają informacje o tym, jak używać danego elementu (np. funkcji), ale nie zawierają implementacji.

```c
// Przykładowy plik nagłówkowy: mojplik.h

#ifndef MOJPLIK_H
#define MOJPLIK_H

// Deklaracje funkcji
int dodaj(int a, int b);
void wyswietlKomunikat(void);

// Deklaracje struktur, zmiennych itp.

#endif  // MOJPLIK_H
```

Dyrektywy `#ifndef`, `#define`, i `#endif` zapobiegają wielokrotnemu włączeniu tego samego pliku nagłówkowego.

3. Używanie Plików Nagłówkowych:

Aby używać pliku nagłówkowego w pliku źródłowym, użyj dyrektywy `#include`.

```c
// Przykładowy plik źródłowy: main.c

#include <stdio.h>
#include "mojplik.h"

int main(void) {
    int wynik = dodaj(3, 4);
    printf("Wynik dodawania: %d\n", wynik);

    wyswietlKomunikat();

    return 0;
}
```

Dyrektywa `#include <stdio.h>` używana jest do dołączenia standardowego pliku nagłówkowego z biblioteką standardową C.

---

Większość IDE (Zintegrowane środowisko programistyczne ang. Integrated Development Environment) umożliwa przejście do definicji funkcji przy kliknięciu w funkcję jednocześnie trzymajac przycisk ctrl.

Przejrzyj plik nagłówkowy raylib.h odnajdując go w drzewie projektu lub przez użycie narzędzia "Go to definition" odszukując funkcję biblioteki w pliku `main.c`

## Zadanie 3

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

Jeśli znajdziesz współrzędne umożliwiające postawienie statku. Zmień odpowiednio status pola `board` na SINGLE_DECKER ... FOUR_DECKER

## Zadanie 4



