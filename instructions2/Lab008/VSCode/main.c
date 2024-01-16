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
    COMPUTER_TURN,
    PLAYER1_WIN,
    COMPUTER_WIN,
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
    MISS = 300,
} FIELD_STATE;

typedef struct
{
    unsigned char row;
    unsigned char col;
    FIELD_STATE state;
} Field;

typedef struct
{
    Field boardPlayer1[BOARD_SIZE][BOARD_SIZE];  // Plansza gracza 1
    Field boardComputer[BOARD_SIZE][BOARD_SIZE]; // Plansza komputera
    int gameState;                               // Stan gry (np. czy trwa gra, czy jest zakończona)
} Game;

// Zmienna globalna która będzie przechowywać stan gry
Game game;

int canPlaceShip(Field board[BOARD_SIZE][BOARD_SIZE], int row, int col, int shipSize, int direction)
{
    if (direction == 0)
    { // Horizontal
        if (col + shipSize > BOARD_SIZE)
        {
            printf("Nie mozna postawic statku  na %i %i direction:%i sieze:%i\n", row, col, direction, shipSize);
            return false;
        }
        // Stawiając statek horyzontalnie sprawdzamy trójki kwadratów w
        // kolumnie począwszy od miejsca przed statkiem do miejsca za statkiem
        int row_min = row - 1 < 0 ? 0 : row - 1;
        int row_max = row + 1 > BOARD_SIZE ? BOARD_SIZE : row + 1;
        int ship_border_start = col - 1 < 0 ? 0 : col - 1;
        int ship_border_end = col + shipSize + 1 > BOARD_SIZE ? BOARD_SIZE : col + shipSize + 1;
        for (int border = ship_border_start; border < ship_border_end; border++)
        {
            for (int row_ = row_min; row_ <= row_max + 1; row_++)
            {

                if (board[row_][border].state != EMPTY)
                {
                    // board[row_][border].state = MARKED;
                    return false;
                }
            }
        }
    }
    else
    { // Vertical
        if (row + shipSize > BOARD_SIZE)
        {
            printf("Nie mozna postawic statku  na %i %i direction:%i sieze:%i\n", row, col, direction, shipSize);
            return false;
        }
        // Stawiając statek horyzontalnie sprawdzamy trójki kwadratów w
        // kolumnie począwszy od miejsca przed statkiem do miejsca za statkiem
        int col_min = col - 1 < 0 ? 0 : col - 1;
        int col_max = col + 1 > BOARD_SIZE ? BOARD_SIZE : col + 1;
        int ship_border_start = row - 1 < 0 ? 0 : row - 1;
        int ship_border_end = row + shipSize + 1 > BOARD_SIZE ? BOARD_SIZE : row + shipSize + 1;
        for (int border = ship_border_start; border < ship_border_end; border++)
        {
            for (int col_ = col_min; col_ <= col_max + 1; col_++)
            {
                if (board[border][col_].state != EMPTY)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void placeRandomShip(Field board[BOARD_SIZE][BOARD_SIZE], int shipSize)
{
    int row, col, direction;
    do
    {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
        direction = rand() % 2; // 0 for horizontal, 1 for vertical
        // direction = 0;
    } while (!canPlaceShip(board, row, col, shipSize, direction));
    for (int i = 0; i < shipSize; ++i)
    {
        if (direction == 0)
        {
            board[row][col + i].state = FOUR_DECKER;
        }
        else
        {
            board[row + i][col].state = FOUR_DECKER;
        }
    }
}

int initGame()
{
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            game.boardPlayer1[row][col] = (Field){row, col, EMPTY};
            game.boardComputer[row][col] = (Field){row, col, EMPTY};
        }
    }
    // Place ships on the board (you can adjust the ship sizes as needed)
    placeRandomShip(game.boardPlayer1, 4); // Battleship
    placeRandomShip(game.boardPlayer1, 3); // Cruiser
    placeRandomShip(game.boardPlayer1, 3); // Cruiser
    placeRandomShip(game.boardPlayer1, 2); // Destroyer
    placeRandomShip(game.boardPlayer1, 2); // Destroyer
    placeRandomShip(game.boardPlayer1, 2); // Destroyer
    placeRandomShip(game.boardPlayer1, 1); // Submarine
    placeRandomShip(game.boardPlayer1, 1); // Submarine
    placeRandomShip(game.boardPlayer1, 1); // Submarine
    placeRandomShip(game.boardPlayer1, 1); // Submarine

    placeRandomShip(game.boardComputer, 4); // Battleship
    placeRandomShip(game.boardComputer, 3); // Cruiser
    placeRandomShip(game.boardComputer, 3); // Cruiser
    placeRandomShip(game.boardComputer, 2); // Destroyer
    placeRandomShip(game.boardComputer, 2); // Destroyer
    placeRandomShip(game.boardComputer, 2); // Destroyer
    placeRandomShip(game.boardComputer, 1); // Submarine
    placeRandomShip(game.boardComputer, 1); // Submarine
    placeRandomShip(game.boardComputer, 1); // Submarine
    placeRandomShip(game.boardComputer, 1); // Submarine

    game.gameState = BOARD_INITIALIZED;
    game.gameState = PLAYER1_TURN;
    return 1;
}

void fieldAction(Field *field)
{
    switch (field->state)
    {
    case EMPTY:
        field->state = MISS;
        game.gameState = COMPUTER_TURN;
        break;
    case SINGLE_DECKER:
    case DOUBLE_DECKER:
    case TRIPPLE_DECKER:
    case FOUR_DECKER:
        field->state = SHOOTED;
        game.gameState = COMPUTER_TURN;
        break;
    }

    printf("Shooted %i %i\n", field->col, field->row);
}

int checkWinCondition(Field board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            switch (board[i][j].state)
            {
            case SINGLE_DECKER:
            case DOUBLE_DECKER:
            case TRIPPLE_DECKER:
            case FOUR_DECKER:
                return 0; // Not all ships have been hit, the game continues
            }
        }
    }
    return 1; // All ships have been hit, someone has won
}

void drawPlayerBoard(int x, int y, Field board[BOARD_SIZE][BOARD_SIZE])
{
    // Draw custom button
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        char str[12];
        sprintf(str, "%i", row + 1);
        DrawText(str, x - MeasureText(str, BUTTON_SIZE) - 5, y + (BUTTON_SIZE * row) + (GAP * row), 30, BLACK);
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            // char str[12];
            sprintf(str, "%c", col + 65);
            DrawText(str, x + BUTTON_SIZE * col + GAP * col, y - BUTTON_SIZE, 30, BLACK);
            int rec_x = col * BUTTON_SIZE + (GAP * col) + x;
            int rec_y = row * BUTTON_SIZE + (GAP * row) + y;
            Rectangle cell = (Rectangle){col * BUTTON_SIZE + (GAP * col) + x, row * BUTTON_SIZE + (GAP * row) + y, BUTTON_SIZE, BUTTON_SIZE};

            // Check if mouse is over a cell
            if (CheckCollisionPointRec(GetMousePosition(), cell))
            {
                // DrawRectangleRec(cell, (Color){200, 200, 200, 255}); // Highlight when hovered
                if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
                {
                    printf("Player board clicked row:%i col:%i\n", row, col);
                    // fieldAction(&board[row][col]);
                }
            }
            else
            {
                switch (board[row][col].state)
                {
                case SINGLE_DECKER:
                case DOUBLE_DECKER:
                case TRIPPLE_DECKER:
                case FOUR_DECKER:
                    DrawRectangleRec(cell, BLACK);
                    break;
                case EMPTY:
                    DrawRectangleRec(cell, WHITE);
                    break;
                case MARKED:
                    DrawRectangleRec(cell, YELLOW);
                    break;
                case SHOOTED:
                    DrawRectangleRec(cell, RED);
                    break;
                case MISS:
                    DrawCircle(rec_x + BUTTON_SIZE / 2, rec_y + BUTTON_SIZE / 2, BUTTON_SIZE / 3, RED);
                    break;
                }
            }

            DrawRectangleLinesEx(cell, 1, BLACK); // Draw cell border
        }
    }
}

void drawComputerBoard(int x, int y, Field board[BOARD_SIZE][BOARD_SIZE])
{
    // Draw custom button
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        char str[12];
        sprintf(str, "%i", row + 1);
        DrawText(str, x - MeasureText(str, BUTTON_SIZE) - 5, y + (BUTTON_SIZE * row) + (GAP * row), 30, BLACK);
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            // char str[12];
            sprintf(str, "%c", col + 65);
            DrawText(str, x + BUTTON_SIZE * col + GAP * col, y - BUTTON_SIZE, 30, BLACK);
            int rec_x = col * BUTTON_SIZE + (GAP * col) + x;
            int rec_y = row * BUTTON_SIZE + (GAP * row) + y;
            Rectangle cell = (Rectangle){rec_x, rec_y, BUTTON_SIZE, BUTTON_SIZE};

            // Check if mouse is over a cell
            if (CheckCollisionPointRec(GetMousePosition(), cell))
            {
                DrawRectangleLinesEx(cell, 3, BLACK); // Highlight when hovered
                if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && game.gameState == PLAYER1_TURN)
                {
                    fieldAction(&board[row][col]);
                }
            }
            else
            {
                switch (board[row][col].state)
                {
                case SINGLE_DECKER:
                case DOUBLE_DECKER:
                case TRIPPLE_DECKER:
                case FOUR_DECKER:
                case EMPTY:
                    DrawRectangleRec(cell, WHITE);
                    break;
                case MARKED:
                    DrawRectangleRec(cell, YELLOW);
                    break;
                case SHOOTED:
                    DrawRectangleRec(cell, RED);
                    break;
                case MISS:
                    DrawCircle(rec_x + BUTTON_SIZE / 2, rec_y + BUTTON_SIZE / 2, BUTTON_SIZE / 3, RED);
                    break;
                }
            }

            DrawRectangleLinesEx(cell, 1, BLACK); // Draw cell border
        }
    }
}

void makeRandomMove()
{
    // Generate random coordinates for the computer's move
    int row, col;
    do
    {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (game.boardPlayer1[row][col].state == SHOOTED || game.boardPlayer1[row][col].state == MISS);

    switch (game.boardPlayer1[row][col].state)
    {
    case EMPTY:
        game.boardPlayer1[row][col].state = MISS;
        game.gameState = PLAYER1_TURN;
        break;
    case SINGLE_DECKER:
    case DOUBLE_DECKER:
    case TRIPPLE_DECKER:
    case FOUR_DECKER:
        game.boardPlayer1[row][col].state = SHOOTED;
        game.gameState = PLAYER1_TURN;
    default:
        break;
    }
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
        BeginDrawing();
        ClearBackground(RAYWHITE);

        drawPlayerBoard(35, 35, game.boardPlayer1);
        drawComputerBoard((BUTTON_SIZE * BOARD_SIZE) + (GAP * BOARD_SIZE) + 70, 35, game.boardComputer);

        EndDrawing();

        if (checkWinCondition(game.boardPlayer1))
        {
            game.gameState = COMPUTER_WIN;
            break;
        }
        else if (game.gameState == COMPUTER_TURN)
        {
            makeRandomMove();
        }
        else if (checkWinCondition(game.boardComputer))
        {
            game.gameState = PLAYER1_WIN;
            break;
        }
    }

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        if (game.gameState == COMPUTER_WIN)
        {
            DrawText("COMPUTER WIN :(", 200, 200, 30, RED);
        }
        else
        {
            DrawText("Congratulations! You win!", 200, 200, 30, GREEN);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}