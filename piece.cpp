#include "types.cpp"
#include <string>

class Piece {
    private:
        char x;
        int y;
        std::string color;
    public:
        Position getPosition() {
            return Position { this->x, this->y };
        } 
        std::string getColor() {
            return this->color;
        }

        Piece(int x, char y, std::string color) {
            this->x = x;
            this->y = y;
            this->color = color;
        }
};
