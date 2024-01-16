#ifndef structures_h

#define BOARD_SIZE 10

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

extern Game game;
#endif