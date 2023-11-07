#include <stdio.h>
#include <stdlib.h>

// Opcja 1 gdy znamy rozmiar tablicy
void show(char imie[3][20], char nazwisko[3][20])
{
    printf("%s\n", imie[0]);
    printf("%s\n", nazwisko[0]);
}

// Opcja 2 przez wskaźnik - będzie to wymagać konwersji typu

void show2(char *imie, char *nazwisko)
{
    // W pamięci imiona będą ułożone w następujący sposób: [Ada                   Tomek                    Piotr                  ]
    // W powyżsym przykładzie spacje reprezentuja puste miejsca w pamieci które zarezerwowaliśmy.
    // Łącznie mamy zarezerwowane 60 komórek przechowujących typ char
    for (int i = 1; i <= 60; i++)
    {
        printf("%c", *imie); // puste znaki nie będą drukowane w konsoli ale się tam znajdują
        // Po przeiterowaniu 20 znaków przejdź do nowej lini
        if ((i % 20) == 0)
        {
            printf("\n");
        }

        imie++; // zwiększam wskaźnik o 1 - przechodzę o komórkę dalej
    }
}

void show3(char (*imie)[20], char (*nazwisko)[20])
{
    printf("%s\n", imie[0]);
    printf("%s\n", nazwisko[0]);
}

int main()
{
    char imiona[3][20] = {"Ada", "Tomek", "Piotr"};
    char nazwiska[3][20] = {"Nazwisko1", "Nazwisko2", "Nazwisko3"};
    printf("\n\ndSHOW1:\n");
    show(imiona, nazwiska);
    printf("\n\nSHOW2:\n");
    show2((char *)imiona, (char *)nazwiska); // char* konwertuje typ char *[20] na char *

    printf("\n\nSHOW3:\n");
    show3(imiona, nazwiska); // char* konwertuje typ char *[20] na char *
    system("PAUSE");
    return 0;
}