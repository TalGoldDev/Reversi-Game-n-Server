/******************************************
*Student name: Tal Pogorelis
*Student ID: 318225349
*Exercise #: 2
******************************************/

#ifndef PLAYER_H_
#define PLAYER_H_
#include "ReversiBoard.h"
#include "Cell.h"

/**
 * the Player abstract class.
 */
class Player {
protected:
	ReversiBoard* gameBoard;
	int color;
public:
	Player(int color);
	virtual ~Player();
	int getColor() const;
	int getScore() const;
	void playOneTurn();
	void setGameBoard(ReversiBoard* board);
	bool hasValidMoves();
	virtual Cell chooseMove() =0;
};

#endif /* PLAYER_H_ */