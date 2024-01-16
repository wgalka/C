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