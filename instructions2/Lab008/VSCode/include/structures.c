#include "strustures.h"

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