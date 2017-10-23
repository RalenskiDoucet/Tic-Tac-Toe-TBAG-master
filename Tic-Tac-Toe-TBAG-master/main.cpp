#include<iostream>
#include"TicTacToe.h"
int main()
{
	PlayingBoard Grid;
	Grid.DrawBoard();
	Grid.GetMove();
	Grid.ChangePlayer('O');
	Grid.GetMove();
	Grid.DrawBoard();
	Grid.ChangePlayer('X');
	Grid.GetMove();
	Grid.DrawBoard();
	Grid.ChangePlayer('O');
	Grid.GetMove();
	Grid.DrawBoard();
	Grid.ChangePlayer('X');
	Grid.GetMove();
	Grid.DrawBoard();
	
	
	
	system("pause");
}
