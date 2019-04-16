#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class Player{
	
	public:
	string name;
	char sign;
	
	Player();

};

class TicTacToe{
	
	public:
	char board[9];
	
	TicTacToe();
	
	void make_move(Player p);
	
	int finish(Player p1, Player p2);
	
	bool check(int n);
	
	void print();

};
