#include <iostream>

using namespace std;

enum ChessPiece{cp_EMPTY,cp_WHITE};
enum playerColor{pc_white,pc_black};

struct ChessBoard
{
    ChessPiece board[8][8];
    playerColor whomove;
    ChessPiece getPiece(int x,int y);
    playerColor getMove();
    void makeMove(int from_x,int from_y,int to_x,int to_y);
    bool ifwin();
};
ChessPiece getPiece()
{
    return board[x][y];
}
playerColor getMove()
{
    return whomove;
}
void makeMove(int from_x,int from_y,int to_x,int to_y)
{
    board[to_x][to_y]=board[from_x][from_y];
    board[from_x][from_y]=cp_EMPTY;
}
bool ifwin()
{
    //
}
int main()
{
    return 0;
}
