#include <iostream>
#include "board.cpp"
#include "piece.cpp"

int main() {
    Board board;
    Piece piece('a', 1, "white");
    std::cout << "x: " << piece.getPosition().x << std::endl;
    std::cout << "y: " << piece.getPosition().y << std::endl;
    std::cout << board.chessBoard[3][4] << std::endl;
    std::cout << piece.getColor() << std::endl;
}
