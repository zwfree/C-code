#include <iostream>

using namespace std;

enum ChessPiece{EMPTY_SQUARE,WHITE_PAWN};
enum playerColor{PC_WHITE,PC_BLACK};

struct ChessBoard
{
    ChessPiece board[8][8];
    playerColor whose_move;

};

ChessPiece getPiece(const ChessBoard* p_board,int x,int y)
{
    return p_board->board[x][y];
}
playerColor getMove(const ChessBoard* p_board)
{
    return p_board->whose_move;
}
void makeMove(ChessBoard* p_board,int from_x,int from_y,int to_x,int to_y)
{
    p_board->board[to_x][to_y]=p_board->board[from_x][from_y];
    p_board->board[from_x][from_y]=EMPTY_SQUARE;
}
int main()
{
    return 0;
}
