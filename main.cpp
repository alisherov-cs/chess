#include <iostream>
#include "board.cpp"
#include "piece.cpp"
using namespace std;

int main() {
    Board board;
    Piece piece('a', 1);
    cout << "x: " << piece.getPosition().x << endl;
    cout << "y: " << piece.getPosition().y << endl;
    cout << board.chessBoard[3][4] << endl;
}
