#pragma once
#include "Game.h"

class TicTacToe : public Game
{
public:

    bool IsGameOver() const;
    void TakeTurn();
    void Display() const;

private:
    char m_board[9] = { ' ', ' ', ' ', ' ', ' ',  ' ',  ' ',  ' ',  ' '};
    bool m_player2sTurn = 0;
    int CounterToCheckDraw = 0;
};