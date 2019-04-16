#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "tictactoe.cpp"

using namespace std;

int main(){
	
	Player p1, p2;
	TicTacToe T;
	
	p1.sign = 'x';
	p2.sign = 'O';
	
	int end;
	
	do{
		
		T.print();
		
		T.make_move(p1);
		
		end = T.finish(p1, p2);
		
		if(end != 3) break;
		
		T.print();
		
		T.make_move(p2);
		
		end = T.finish(p1, p2);
		
	}while( end == 3 );
	
	T.print();
	
	if(end == 1){
				
		cout<<p1.name<<"  wins !!\n\n";
		
	}
	else if(end == 2){
		
		cout<<p2.name<<"  wins !!\n\n";
		
	}
	else if(end == 0){
		
		cout<<" Game Draw !!\n\n";
		
	}
	
	return 0;
}

