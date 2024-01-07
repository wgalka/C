#include <stdlib.h>
// Miejsce na biblioteki które wykorzystuje program

// Miejsce na typ wyliczeniowy dla funkcji makeMove.

// Proszę utworzyć złożony typ danych Board przechowujący:
// Symbol gracza 1 będący znakiem ASCII
// Symbol gracza 2 będący znakiem ASCII
// Symbol gracza mającego aktualnie ruch(będzie to symbol gracza
// 1 lub 2 aktualizowany po kazdym ruchu)
// Tablicę dwuwymiarową o 4 kolumnach i 4 wierszach.

// Proszę napisać funkcję showBoard przyjmującą wskaźnik na zmienną typu Board
// która wypisuje w konsoli obecny stan planszy wykorzystując pętlę WHILE
// w następujący sposób:
// * A B C D
// 1
// 2
// 3
// 4

// Proszę napisać funkcję findWinner przyjmującą złożony typ danych Board i
// zwracającą symbol gracza którego 4 znaki znajdują się w wierszu,
// kolumnie lub po przekątnej na planszy(dwuwymiarowej tablicy).
// Jeśli żaden z graczy nie wygrał funkcja zwraca -1.
// Jeśli nie jest możliwy kolejny ruch funkcja zwraca -2.

// Proszę napisać funkcję makeMove przyjmującą wskaźnik na zmienną typu Board,
// znak(A, B, C lub D), liczbę całkowitą(1,2, 3 lub 4).
// Funkcja wpisze we wskazane miejsce na planszy symbol gracza który ma aktualnie ruch.
// Jeśli ruch jest nielegalny funkcja zwraca -1.
// Jeśli wpisany znak lub liczba wykracza poza planszę funkcja zwraca -2.
// Przy poprawnym ruchu funkcja zmienia symbol aktualnego gracza w zmiennej Board i zwraca 1.

int main()
{
    // Proszę pobrać od użytkownika sylbol gracza 1, symbol gracza 2
    // a następnie utworzyć zmienną typu Board przechowującą pobrane informacje.

    // Proszę utworzyć menu umożliwiające przeprowadzenie rozgrywki wykorzystując
    // wcześniej utworzone funkcje aż do momentu wygranej jednego z graczy.
    return EXIT_SUCCESS;
}