#include "include/raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "include/raygui.h"
#include <stdio.h>

#define BOARD_SIZE 10
#define GAP 2
#define PADDING 30
#define BUTTON_SIZE 30
#define WINDOW_WIDTH ((BOARD_SIZE * BUTTON_SIZE + (GAP * BOARD_SIZE)) * 2) + 3 * PADDING
#define WINDOW_HEIGHT (BOARD_SIZE * BUTTON_SIZE + (GAP * BOARD_SIZE)) + 2 * PADDING

enum GAME_STATE
{
    BOARD_INITIALIZED,
    PLACE_SHIP,
    GAME_STARTED,
    PLAYER1_TURN,
    PLAYER2_TURN,
    PLAYER1_WIN,
    PLAYER2_WIN,
};

typedef enum
{
    EMPTY = 0,
    SINGLE_DECKER,
    DOUBLE_DECKER,
    TRIPPLE_DECKER,
    FOUR_DECKER,
    SHOOTED = 100,
    MARKED = 200,
} FIELD_STATE;

typedef struct
{
    unsigned char row;
    unsigned char col;
    FIELD_STATE state;
} Field;

typedef struct
{
    Field boardPlayer1[BOARD_SIZE][BOARD_SIZE]; // Plansza gracza 1
    Field Player1Shoots[BOARD_SIZE][BOARD_SIZE];
    Field boardPlayer2[BOARD_SIZE][BOARD_SIZE]; // Plansza komputera
    Field Player2Shoots[BOARD_SIZE][BOARD_SIZE];
    int gameState; // Stan gry (np. czy trwa gra, czy jest zakończona)
} Game;

// Zmienna globalna która będzie przechowywać stan gry
Game game;

int initGame()
{
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            game.boardPlayer1[row][col] = (Field){row, col, EMPTY};
            game.boardPlayer2[row][col] = (Field){row, col, EMPTY};
            game.Player1Shoots[row][col] = (Field){row, col, EMPTY};
            game.Player2Shoots[row][col] = (Field){row, col, EMPTY};
        }
    }

    game.gameState = BOARD_INITIALIZED;
    return 1;
}

void fieldAction(Field *field)
{
    if (field->state == EMPTY)
    {
        field->state = SHOOTED;
    }
    printf("Shooted %i %i\n", field->col, field->row);
}

void drawBoard()
{
    BeginDrawing();
    ClearBackground(RAYWHITE);

    // Rectangle rec = {0, 0, 30, 30};
    // DrawRectangleRec(rec, (Color){200, 200, 200, 255});

    // if (CheckCollisionPointRec(GetMousePosition(), rec))
    // {
    //     DrawRectangleRec(rec, (Color){255, 200, 200, 255});
    // }

    // Draw custom button
    // for (int row = 0; row < BOARD_SIZE; row++)
    // {
    //     for (int col = 0; col < BOARD_SIZE * 2; col++)
    //     {
    //         Rectangle cell;
    //         if (col < BOARD_SIZE)
    //         {
    //             cell = (Rectangle){col * BUTTON_SIZE + (GAP * col) + PADDING, row * BUTTON_SIZE + (GAP * row) + PADDING, BUTTON_SIZE, BUTTON_SIZE};
    //         }
    //         else
    //         {
    //             cell = (Rectangle){col * BUTTON_SIZE + (GAP * col) + (2 * PADDING), row * BUTTON_SIZE + (GAP * row) + PADDING, BUTTON_SIZE, BUTTON_SIZE};
    //         }

    //         // Check if mouse is over a cell
    //         if (CheckCollisionPointRec(GetMousePosition(), cell))
    //         {
    //             DrawRectangleRec(cell, (Color){200, 200, 200, 255}); // Highlight when hovered
    //             if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
    //             {
    //                 (col < BOARD_SIZE) ? fieldAction(&game.boardPlayer1[row][col]) : fieldAction(&game.Player1Shoots[row][col % BOARD_SIZE]);
    //             }
    //         }
    //         else
    //         {

    //             Color recColor = WHITE;
    //             switch (game.boardPlayer1[row][col].state)
    //             {
    //             case EMPTY:
    //                 recColor = WHITE;
    //                 break;
    //             case SINGLE_DECKER || DOUBLE_DECKER || TRIPPLE_DECKER || FOUR_DECKER:
    //                 recColor = BLACK;
    //                 break;
    //             case MARKED:
    //                 recColor = YELLOW;
    //                 break;
    //             case SHOOTED:
    //                 recColor = RED;
    //                 break;
    //             }
    //             DrawRectangleRec(cell, recColor);
    //         }

    //         DrawRectangleLinesEx(cell, 1, BLACK); // Draw cell border
    //     }
    // }

    // const CELL_SIZE = 30;
    // for (int i = 0; i < BOARD_SIZE; i++)
    // {
    //     for (int j = 0; j < BOARD_SIZE; j++)
    //     {
    //         Rectangle rec = {i * CELL_SIZE , j * CELL_SIZE , CELL_SIZE, CELL_SIZE};

    //         if ((i + j) % 2 == 0)
    //         {
    //             DrawRectangleRec(rec, BLACK);
    //         }
    //         else
    //         {
    //             DrawRectangleRec(rec, WHITE);
    //         }
    //     }
    // }

    Rectangle rec = {0, 0, 30, 30};
    DrawRectangleRec(rec, (Color){200, 200, 200, 255});

    if (CheckCollisionPointRec(GetMousePosition(), rec))
    {
        DrawRectangleRec(rec, (Color){255, 200, 200, 255});
    }

    DrawRectangleLinesEx(rec, 1, BLACK); // Draw cell border

    Rectangle rec1 = {40, 0, 30, 30};
    DrawRectangleRec(rec1, (Color){200, 200, 200, 255});

    if (CheckCollisionPointRec(GetMousePosition(), rec1))
    {
        DrawRectangleRec(rec1, (Color){255, 200, 200, 255});
    }

    DrawRectangleLinesEx(rec1, 1, BLACK); // Draw cell border

    EndDrawing();
}

int main(void)
{

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "BattleShips.exe");
    initGame();

    // Load an image and set it as the window icon
    Image icon = LoadImage("resources/ship.png"); // Replace "your_icon.png" with the path to your image
    SetWindowIcon(icon);

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        drawBoard();
    }

    CloseWindow();

    return 0;
}