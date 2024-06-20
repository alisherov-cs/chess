#include "types.cpp"
#include <string>

class Piece {
    private:
        char x;
        int y;
        std::string color;
    public:
        Piece(int x, char y, std::string color) {
            this->x = x;
            this->y = y;
            this->color = color;
        }

        Position getPosition() {
            return Position { this->x, this->y };
        } 

        std::string getColor() {
            return this->color;
        }

        void move(char x, int y) {
            // movement...
        }
};

class Pawn : public Piece {
    public:
        Pawn(char x, int y, std::string color) : Piece(x, y, color) {}
};
