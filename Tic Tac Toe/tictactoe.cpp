#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "tictactoe.h"

using namespace std;
	
Player::Player(){
	
	cout<<"What is your name: ";
	fflush(stdin);
	getline(cin, name);
	
}

TicTacToe::TicTacToe(){
	
	board[0] = '1';
	board[1] = '2';
	board[2] = '3';
	board[3] = '4';
	board[4] = '5';
	board[5] = '6';
	board[6] = '7';
	board[7] = '8';
	board[8] = '9';
	
}

void TicTacToe::make_move(Player p){
	
	int no;
	
	repeat:
	
	cout<< p.name <<"... Please enter your choice from 1-9 : ";
	cin>>no;
	
	bool ok = check(no);
	
	if(ok){
		
		board[no-1] = p.sign;
		
	}
	else{
		
		cout<<"Your choice is invalid, Please enter again...";
		goto repeat;
		
	}
	
}

int TicTacToe::finish(Player p1, Player p2){
	
	if( board[0] == board[1] && board[1] == board[2] && board[2] == p1.sign ) return 1;
	else if( board[3] == board[4] && board[4] == board[5] && board[5] == p1.sign ) return 1;
	else if( board[6] == board[7] && board[7] == board[8] && board[8] == p1.sign ) return 1;
	else if( board[0] == board[3] && board[3] == board[6] && board[6] == p1.sign ) return 1;
	else if( board[1] == board[4] && board[4] == board[7] && board[7] == p1.sign ) return 1;						
	else if( board[2] == board[5] && board[5] == board[8] && board[8] == p1.sign ) return 1;		
	else if( board[0] == board[4] && board[4] == board[8] && board[8] == p1.sign ) return 1;		
	else if( board[2] == board[4] && board[4] == board[6] && board[6] == p1.sign ) return 1;
	
	
	else if( board[0] == board[1] && board[1] == board[2] && board[2] == p2.sign ) return 2;
	else if( board[3] == board[4] && board[4] == board[5] && board[5] == p2.sign ) return 2;
	else if( board[6] == board[7] && board[7] == board[8] && board[8] == p2.sign ) return 2;
	else if( board[0] == board[3] && board[3] == board[6] && board[6] == p2.sign ) return 2;
	else if( board[1] == board[4] && board[4] == board[7] && board[7] == p2.sign ) return 2;						
	else if( board[2] == board[5] && board[5] == board[8] && board[8] == p2.sign ) return 2;		
	else if( board[0] == board[4] && board[4] == board[8] && board[8] == p2.sign ) return 2;		
	else if( board[2] == board[4] && board[4] == board[6] && board[6] == p2.sign ) return 2;
	
	else if( board[0] != '1' && board[1] != '2' && board[2] != '3' && board[3] != '4' && board[4] != '5' && board[5] != '6' && board[6] != '7' && board[7] != '8' && board[8] != '9' ) return 0;
	
	else return 3;
			
}

bool TicTacToe::check(int n){
	
	if( n<1 || n>9 ) return false;
	
	if( board[n-1] == 'x' || board[n-1] == 'o' ) return false;
	
	return true;
	
}

void TicTacToe::print(){
	
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << endl;

	cout << "     |     |     " << endl << endl;
			
}


