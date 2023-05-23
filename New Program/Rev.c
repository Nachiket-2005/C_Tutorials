#include <stdio.h>

// Function to display the game board
void display_board(char board[][3]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if a player has won
int check_win(char board[][3], char player) {
    int i, j;

    // Check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
    }

    // Check columns
    for (j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }

    return 0;
}

int main() {
    char board[3][3];
    int i, j, row, col, move = 0;
    char player = 'X';

    // Initialize the board with spaces
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    // Game loop
    while (1) {
        // Display the board
        display_board(board);

        // Get the player's move
        printf("Player %c, enter your move (row column): ", player);
        scanf("%d %d", &row, &col);

        // Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move, please try again.\n");
            continue;
        }
        if (board[row][col] != ' ') {
            printf("That space is already taken, please try again.\n");
            continue;
        }

        // Update the board
        board[row][col] = player;
        move++;

        // Check if the game is over
        if (check_win(board, player)) {
            printf("Player %c wins!\n", player);
            display_board(board);
            break;
        }
        if (move == 9) {
            printf("The game is a draw.\n");
            display_board(board);
            break;
        }

        // Switch to the other player
        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }
    }

    return 0;
}