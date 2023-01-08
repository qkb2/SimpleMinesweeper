#include "Resettable.h"

class Board: public Resettable
{
private:
    /* data */
public:
    Board(int gridSize);
    ~Board();
    void printBoard();
    void setBoard();
    void reset();
};