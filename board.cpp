class Board {
    private:
        char letters[8] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
    public:
        char chessBoard[8][8];

    Board() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                chessBoard[i][j] = letters[j];
            }
        }
    }
};
