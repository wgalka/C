#include <stdlib.h>
#include <stdio.h>

typedef struct player
{
    int myboats[10][10];
    int oponentboats[10][10];
} player;

char boardHelper(int a)
{
    // TODO funkcja zwraca " " jeśli a jest = 0
    if (a == 0)
    {
        return ' ';
    }

    // Funkcja zwraca char odpowiadający danej liczbie jeśli a != 0
    if (a > 0)
    {
        return ((char)a) + '0';
    }

    return;
}

//  1 2 3 4 5 6 7 8 9 0        1 2 3 4 5 6 7 8 9 0
// A1                        A
// B                         B
// C2 2                      C
// D                         D
// E                         E
// F                         F
// G                         G
// H                         H
// I                         I
// J                         J
void showBoard(player ply)
{
    // Pętla wypisująca legendę nad planszą
    for (int i = 1; i < 21; i++)
    {
        // jeśli wypisujemy 1 chcemy przed nią mieć dwie spacje w przeciwieństwie do reszty elementów
        if (i == 1)
        {
            printf("  %i ", i);
        }
        // jeśli wypisujemy 11 znak legendy wypisuje przed nim znak tabulacji
        else if (i == 11)
        {
            printf("\t %i ", (i % 10));
        }
        // Pozostałą częśc legendy wypisujemy ze spacją po liczbie aż do 10
        else
        {
            printf("%i ", (i % 10));
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (j == 0)
            {
                printf("%c ", 65 + i);
            }

            // TODO dodać wypisywanie planszy
            if (j < 10)
            {
                printf("%c ", boardHelper(ply.myboats[i][j]));
            }
            else if (j == 10)
            {
                printf("\t %c ", boardHelper(ply.oponentboats[i][j % 10]));
            }
            else
            {
                printf("%c ", boardHelper(ply.oponentboats[i][j % 10]));
            }
            if (j == 19)
            {
                printf("\n");
            }
        }
    }
}

void addBoat(player *ply, short ileMasztow)
{

    int kolumna = 99;
    // odczytanie od użytkownika wiersza
    char wiersz;

    while (kolumna > 10 || kolumna < 0)
    {
        printf("Ruch jest poza plansza!");
        scanf("%i", &kolumna);
    }
    while (wiersz < 'A' || wiersz > 'J')
    {
        printf("Ruch jest poza planszą!");
        scanf(" %c", &wiersz);
    }
}

int main()
{
    player ply1;
    player ply2;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ply1.myboats[i][j] = 0;
            ply1.oponentboats[i][j] = 1;

            ply2.myboats[i][j] = 0;
            ply2.oponentboats[i][j] = 1;
        }
    }

    ply1.oponentboats[4][4] = 5;

    showBoard(ply1);

    return EXIT_SUCCESS;
}
