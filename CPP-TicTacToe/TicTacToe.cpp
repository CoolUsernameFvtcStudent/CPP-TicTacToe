#include "TicTacToe.h"
#include <iostream>
#include <conio.h>
using namespace std;

void TicTacToe::Display() const
{
    system("cls");
    for (int i = 0; i < 1; i++) {

        cout << "[" << m_board[0] << "]";
        cout << "[" << m_board[1] << "]";
        cout << "[" << m_board[2] << "]";
        cout << "\n";
        cout << "[" << m_board[3] << "]";
        cout << "[" << m_board[4] << "]";
        cout << "[" << m_board[5] << "]";
        cout << "\n";
        cout << "[" << m_board[6] << "]";
        cout << "[" << m_board[7] << "]";
        cout << "[" << m_board[8] << "]";
        cout << "\n";

    }
}


void TicTacToe::TakeTurn()
{
    int choice;
    cout << "\nPlayer " << (m_player2sTurn?2:1) << ", please make a choice\n";
    cin >> choice;


    if (m_board[choice - 1] == ' ')
    {
        m_player2sTurn = !m_player2sTurn;
        CounterToCheckDraw++;
        if (!m_player2sTurn)
        {
            m_board[choice - 1] = 'X';
        }
        else
        {
            m_board[choice - 1] = 'O';
        }
    }
    else
    {
        cout << "Error, slot " << choice << " is already filled, press any key to continue";
        (void)_getch();
        return;
    }
    
}



bool TicTacToe::IsGameOver() const
{
    char a, b, c;

    a = m_board[0];
    b = m_board[1];
    c = m_board[2];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn?1:2) << " Has Won! ";
        return true;
    }
    a = m_board[3];
    b = m_board[4];
    c = m_board[5];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }
    a = m_board[6];
    b = m_board[7];
    c = m_board[8];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }
    a = m_board[0];
    b = m_board[3];
    c = m_board[6];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }
    a = m_board[1];
    b = m_board[4];
    c = m_board[7];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }
    a = m_board[2];
    b = m_board[5];
    c = m_board[8];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }
    a = m_board[0];
    b = m_board[4];
    c = m_board[8];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }
    a = m_board[2];
    b = m_board[4];
    c = m_board[6];
    if (a != ' ' && a == b && b == c) {
        cout << "\nPlayer " << (m_player2sTurn ? 1 : 2) << " Has Won! ";
        return true;
    }

    if (CounterToCheckDraw == 9) {
        cout << "\nIt is a Tie! ";
        return true;
    }

    return false;
}