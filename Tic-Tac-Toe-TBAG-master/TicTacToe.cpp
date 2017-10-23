#include "TicTacToe.h"
#include<iostream>
using namespace std;

PlayingBoard::PlayingBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mBoard[i][j] = 95;
		}
	}
}

void PlayingBoard::DrawBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mBoard[i][j] << "";
		}
		cout << endl;
	}
}

void PlayingBoard::GetMove()
{
	char player1 = 'X';
	int move;
	cout << "\nEnter were you would like to place your playing token Player 1:\n";
	cin >> move;

	if (move == 1)
	{
		mBoard[0][0] = player1;
	}
	else if (move == 2)
	{
		mBoard[0][1] = player1;
	}
	else if (move == 3)
	{
		mBoard[0][2] = player1;
	}
	else if (move == 4)
	{
		mBoard[1][0] = player1;
	}
	else if (move == 5)
	{
		mBoard[1][1] = player1;
	}
	else if (move == 6)
	{
		mBoard[1][2] = player1;
	}
	else if (move == 7)
	{
		mBoard[2][0] = player1;
	}
	else if (move == 8)
	{
		mBoard[2][1] = player1;
	}
	else if (move == 9)
	{
		mBoard[2][2] = player1;
	}
	char player2 = 'O';
	cout << "\nEnter were you would like to place your playing token Player 2:\n";
	cin >> move;
	if (move == 1)
	{
		mBoard[0][0] = player2;
	}
	else if (move == 2)
	{
		mBoard[0][1] = player2;
	}
	else if (move == 3)
	{
		mBoard[0][2] = player2;
	}
	else if (move == 4)
	{
		mBoard[1][0] = player2;
	}
	else if (move == 5)
	{
		mBoard[1][1] = player2;
	}
	else if (move == 6)
	{
		mBoard[1][2] = player2;
	}
	else if (move == 7)
	{
		mBoard[2][0] = player2;
	}
	else if (move == 8)
	{
		mBoard[2][1] = player2;
	}
	else if (move == 9)
	{
		mBoard[2][2] = player2;
	}
}

void PlayingBoard::ChangePlayer(char player)
{
	if (player == 'X')
		player = 'O';
	else if (player == 'O')
		player = 'X';
}


bool PlayingBoard::TurnOrder()
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			if (mBoard[i][j] == 'X' && mBoard[i][j] == 'O')
				return true;
			else
				return false;
		}
	}
	return false;
}


