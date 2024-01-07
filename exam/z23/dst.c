#include <stdlib.h>
#include <time.h>
// Proszę dodać import biblioteki standardowej zawierającej stałą przechowującą wartość liczby PI.

// Proszę dodać import biblioteki standardowej obsługującej standardowe wejście wyjście

// Proszę utworzyć złożony typ danych o nazwie Cylinder przechowujący wysokość i średnicę walca.
// Średnica może być wyrażona za pomocą liczb rzeczywistych.

// Proszę napisać funkcję o nazwie volume zwracającą objętość walca którego średnica i wysokość będą
// przekazywane do funkcji za pomocą złożonego typu danych o nazwie Cylinder.

// Proszę napisać funkcję printInfo wyświetlającą informacje o walcach.
// Funkcja przyjmuje jako argument wskaźnik na tablicę przechowującą typ Cylinder
// oraz rozmiar tablicy wyrażony liczbą całkowitą.
// Funkcja wypisuje dane w następujący sposób:
// Cylinder1(r=0.400, h=0.200)
// Cylinder2(r=0.342, h=0.210)
// ...
// Cylinder10(r=0.200, h=0.100)
// Proszę wykorzystać pętlę WHILE do iteracji tablicy

int main()
{
    srand(time(NULL));
    // Proszę utworzyć tablicę 10 elementów przechowującą złożony typ danych Cylinder nazwaną cylinders.

    // Proszę wypełnić wcześniej utworzoną tablicę danymi na temat 10 walców.
    // Średnice niech będą losowymi liczbami z przedziału [1, 10].
    // Wysokości walców niech będą losowymi liczbami z przedziału [1, 5].

    // Proszę wywołać funkcję printInfo(cylinders, 10)

    // Za pomocą pętli FOR proszę wyszukać walec o najmniejszej objętości.
    // Następnie wypisać informacje o tym walcu w następujący sposób:
    // Smallest cylinder: Cylinder5(r=0.001, h=0.001)

    // Proszę utworzyć Menu pozwalające użytkownikowi:
    // 1. Zmienić średnicę oraz wysokość walca pod wskazanym indeksem tablicy.
    // 2. Wyświetlić zawartość tablicy "cylinders".
    // 3. Wyjść z programu.
    return EXIT_SUCCESS;
}