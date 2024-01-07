 // Draw custom button
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        for (int col = 0; col < BOARD_SIZE * 2; col++)
        {
            Rectangle cell;
            if (col < BOARD_SIZE)
            {
                cell = (Rectangle){col * BUTTON_SIZE + (GAP * col) + PADDING, row * BUTTON_SIZE + (GAP * row) + PADDING, BUTTON_SIZE, BUTTON_SIZE};
            }
            else
            {
                cell = (Rectangle){col * BUTTON_SIZE + (GAP * col) + (2 * PADDING), row * BUTTON_SIZE + (GAP * row) + PADDING, BUTTON_SIZE, BUTTON_SIZE};
            }

            // Check if mouse is over a cell
            if (CheckCollisionPointRec(GetMousePosition(), cell))
            {
                DrawRectangleRec(cell, (Color){200, 200, 200, 255}); // Highlight when hovered
                if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
                {
                    (col < BOARD_SIZE) ? fieldAction(&game.boardPlayer1[row][col]) : fieldAction(&game.Player1Shoots[row][col % BOARD_SIZE]);
                }
            }
            else
            {

                Color recColor = WHITE;
                switch (game.boardPlayer1[row][col].state)
                {
                case EMPTY:
                    recColor = WHITE;
                    break;
                case SINGLE_DECKER || DOUBLE_DECKER || TRIPPLE_DECKER || FOUR_DECKER:
                    recColor = BLACK;
                    break;
                case MARKED:
                    recColor = YELLOW;
                    break;
                case SHOOTED:
                    recColor = RED;
                    break;
                }
                DrawRectangleRec(cell, recColor);
            }

            DrawRectangleLinesEx(cell, 1, BLACK); // Draw cell border
        }