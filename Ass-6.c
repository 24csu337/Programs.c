// Tic Tac Toe Game
// The working of tic tac toe game is same as traditional tic tac toe
// having following components:
// • Objective: To be the first to make a straight line with
// either ‘X’ or ‘O’.
// • Game Board: The board consists of a 3×3 matrix-like
// structure, having 9 small boxes.
// • The computer: Since it is a two-player game each player
// gets one chance alternatively. i.e.; first player1 than
// player2.
// • Moves: The computer starts the game with O. After that
// player makes moves alternatively.
// • Winning: You win by making your symbol in a row or
// diagonal or column. Also, as a part of strategy you need to
// block your opponent from forming a straight line while
// making of your own.

#include <stdio.h>
char board[3][3];
void initialize_board() {
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}
void display_board() {
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}
int check_win() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;
    return 0;
}
int is_board_full() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

int make_move(int player) {
    int row, col;
    char mark = (player == 1) ? 'X'||'x' : 'O'||'o';

    printf("Player %d (%c), enter row (1-3) and column (1-3): ", player, mark);
    scanf("%d %d", &row, &col);
    row--; col--;
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        printf("Invalid move! Try again.\n");
        return 0;
    } else {
        board[row][col] = mark;
        return 1;
    }
}
int main() {
    int player = 1;
    initialize_board();
    display_board();
    while (1) {
        if (make_move(player)) {
            display_board();
            if (check_win()) {
                printf("Hurray! \nPlayer %d wins!\n", player);
                break;
            }
            else if (is_board_full()) {
                printf("It's a tie!\n");
                break;
            }
            player = (player == 1) ? 2 : 1;
        }
    }
 return 0;
}