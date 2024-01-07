#include <stdlib.h>

// Proszę utworzyć złożony typ danych Book reprezentujący książkę.
// typ powinien przechowywać informacje o książce, takie jak: tytuł, autor, rok wydania, numer katalogowy.
// Zależy nam aby struktura nie zajmowała nadmiarowo miejsca w pamięci komputera. Stąd tytuł oraz autor
// powinny być przechowywane z sposób DYNAMICZNY.

// Proszę utworzyć funkcję createBook przyjmującą tytuł jako tablicę znaków, autora jako tablicę znaków,
// rok wydania jako liczbę całkowitą(bez znaku do 32 tysięcy),
// numer katalogowy(liczba całkowita bez znaku zajmująca 8 bajtów).
// Funkcja zwraca wartość typu Book.

// Proszę napisać funkcję freeBook przyjmującą wskaźnik na typ Book która zwolni dynamicznie alokowane
// miejsce w pamięci poszczeólnych pól.

// Proszę napisać funkcję copyBook która przyjmuje wskaźnik na typ Book z którego kopiujemy oraz wsakźnik
// na typ Book do którego kopiujemy wartości. AUTOR I TYTUŁ NIE POWINNY BYĆ WSPÓŁDZIELONE POMIĘDZY KSIĄŻKAMI

// Proszę napisać funkcję addBook która przyjmuje wskaźnik na tablicę przechowującą typ Book,
// zmienną typu Book która ma zostać dodana do tablicy, wielkosć tablicy wyrażoną liczbą całkowitą.
// Jeśli dodanie ksiązki będzie pomyślne funkcja zwraca 1.
// Jeśli dodanie ksiązki się nie powiedzie funkcja zwróci -1.
// Jeśli jakaś z książek już obecnych w tablicy będzie miała taki sam numer katalogowy funkcja zwróci -2 i
// ksiażka się nie doda.

int main()
{
    // Proszę utworzyć książkę o tytule "Tajemnicza Wyspa" autor "Jules Verne" rok wydania 1874 i numerze katalogowym
    // będącym twoim numerem albumu.

    // Proszę utworzyć tablicę 10 kasiążek a następnie wypełnij ją kopiami wcześniej stworzonej książki
    // wykorzystując funkcję copyBook.

    // Proszę edytować książkę pod ostatnim indeksem w tablicy zmieniając jej tytuł na "tajemnicza wyspa".

    // Proszę wypisać informację o książkach pod 5 i 9 indeksem.

    // Proszę utworzyć tablicę 1000 książek.

    // Proszę dodać do tablicy za pomocą funkcji addBook książkę o tytule "test1", autora "test1", rok wydania: 1999, i numerze katalogowym 132113

    // Proszę wypisać zawartość tablicy w postaci:
    // test1 test1 1999 132113
    // (Aktualnie w tablicy jest jedna książka i tylko ona powinna się wyświetlać)

    // Proszę spróbować dodać kopię książki test1 i wypisać wartość zwróconą przez funkcję addBook.

    // Proszę wypełnić tablicę ksiązkami za pomocą funkcji addBook gdzie tytuł każdej kolejnej książki będzie miał dodaną literę 'd'
    // do tytułu oraz numer katalogowy będzie zwiększony o 1.

    // Proszę wypisać zawartość tablicy.

    // Proszę utworzyć menu pozwalajace na:
    // Edycję książki po wpisaniu jej numeru katalogowego
    // Dodanie ksiażki w wolne miejsce
    // Usunięcie książki
    // Wypisanie zawartości tablicy

    // Proszę napisać kod który będzie zwalniał dynamicznie alokowane miejsce w pamięci wszystkich zmiennych powstałych w trakcie działania programu.

    return EXIT_SUCCESS;
}