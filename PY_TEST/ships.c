#include <stdlib.h>
#include <stdio.h>

typedef struct player
{
    int myBoard[10][10];
    int oponentBoard[10][10];
} player;

char pustePole(int a)
{
    if (a)
    {
        return '0' + a;
    }
    return ' ';
}

//   1 2 3 4 5 6 7 8 9 0        1 2 3 4 5 6 7 8 9 0
// A 1                        A
// B                          B
// C 2 2                      C
// D                          D
// E                          E
// F                          F
// G                          G
// H                          H
// I                          I
// J                          J
void showBoard(player ply)
{
    // TODO funkcja ma wypisać stan planszy danego gracza
    for (int i = 1; i < 21; i++)
    {
        if (i == 1)
        {
            printf("  %i ", i);
        }
        else if (i == 11)
        {
            printf("\t  %i ", i % 10);
        }
        else
        {
            printf("%i ", i % 10);
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (j == 0)
            {
                printf("%c %c ", 'A' + i, pustePole(ply.myBoard[i][j % 10]));
            }
            else if (j == 10)
            {
                printf("\t%c %c ", 'A' + i, pustePole(ply.oponentBoard[i][j % 10]));
            }
            else
            {
                // printf("  ");
                if (j > 10)
                {
                    printf("%c ", pustePole(ply.oponentBoard[i][j % 10]));
                }
                else
                {
                    printf("%c ", pustePole(ply.myBoard[i][j % 10]));
                }
            }
        }
        printf("\n");
    }
}

void addBattleShip(player *ply, char *battleShip)
{
    // "A1"
    int boatSize = 0;
    for (char *i = battleShip; *i; i++)
    {
        boatSize += 1;
    }
    boatSize = boatSize / 2;
    // printf("rozmiar: %i", boatSize);

    for (int i = 0; i < 20; i += 2)
    {
        int col = battleShip[i + 1];
        int row = battleShip[i] - 'A';
        ply->myBoard[col][row] = boatSize;
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
            ply1.myBoard[i][j] = 0;
            ply1.oponentBoard[i][j] = 1;
        }
    }

    showBoard(ply1);

    char battleShip[21];
    scanf("%s", battleShip);
    addBattleShip(&ply1, battleShip);

    showBoard(ply1);
    return EXIT_SUCCESS;
}