#include <iostream>

using namespace std;

enum ChessPiece{EMPTY_SQUARE,WHITE_PAWN};
enum playerColor{PC_WHITE,PC_BLACK};

class ChessBoard
{
public:
    ChessPiece getPiece(int x,int y);
    playerColor getMove();
    void makeMove(int from_x,int from_y,int to_x,int to_y);

 private:
    ChessPiece board[8][8];
    playerColor whose_move;
};
ChessPiece ChessBoard::getPiece(int x,int y)
{
    return board[x][y];
}
playerColor ChessBoard::getMove()
{
    return whose_move;
}
void ChessBoard::makeMove(int from_x,int from_y,int to_x,int to_y)
{
    board[to_x][to_y]=board[from_x][from_y];
    board[from_x][from_y]=EMPTY_SQUARE;
}
int main()
{
    return 0;
}
