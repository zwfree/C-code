#include <iostream>

using namespace std;

enum ChessPiece{cp_EMPTY,cp_WHITE};
enum playerColor{pc_white,pc_black};

class ChessBoard
{
public:
    ChessPiece getPiece(int x,int y);
    playerColor getMove();
    void makeMove(int from_x,int from_y,int to_x,int to_y);
    bool ifwin();
private:
    ChessPiece board[8][8];
    playerColor whomove;
};
ChessPiece ChessBoard::getPiece()
{
    return board[x][y];
}
playerColor ChessBoard::getMove()
{
    return whomove;
}
void ChessBoard::makeMove(int from_x,int from_y,int to_x,int to_y)
{
    board[to_x][to_y]=board[from_x][from_y];
    board[from_x][from_y]=cp_EMPTY;
}
bool ChessBoard::ifwin()
{
    //
}
int main()
{
    return 0;
}
