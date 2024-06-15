#include "types.cpp"

class Piece {
    private:
        char _x;
        int _y;
    public:
        Position getPosition() {
            return Position { _x, _y };
        } 

        Piece(int x, char y) {
            _x = x;
            _y = y;
        }
};
