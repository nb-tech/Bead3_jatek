#ifndef BOARD_HPP_INCLUDED
#define BOARD_HPP_INCLUDED
#include "widgets.hpp"

class Board: public  Widget {
protected:
    int b[7][6];
    int boxsize,circlesize;
public:
    Board(int kx, int ky, int w, int h);
    virtual void Draw() const ;
    virtual void Handle(genv::event ev) ;
    static const int ROWS = 6;
    static const int COLUMNS = 7;
;

    int getPosition(int row, int col) const {
        return b[row][col];
    }
    void addGamePiece( const int col, const int gamePiece);
    bool CheckWinner(int turn);

};


#endif // BOARD_HPP_INCLUDED
