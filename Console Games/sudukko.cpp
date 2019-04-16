#include<iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

bool check(int table [int i][], int j ,int a ){
	
	for (int a=0; a<i-1; a++){
		
	if (table[i][j] == table[a][j])	goto repeat;
		
	}
	
	for (int a=0; a<j-1; a++){
		
	if (table[i][j] == table[i][a])	goto repeat;
		
	}
	
}

int main(){
	
	int a,r;
	
	cout<<"enter the maximum number of game you want to play: ";
	cin>>r;
	
	r=r-1;
	
	int table[r][r];
	
	for (int i=0; i<r; r++){
		
		for (int j=0; j<r; j++){
				
			table[i][j]=0;
			
		}
		
	}
	
	for (int i=0; i<r; r++){
		
		for (int j=0; j<r; j++){
				
			repeat:
			
			srand (time(NULL));

			a = rand() % 100 + 1;
	
			bool check(table[i][], j , a );
			
		}
		
	}
		
	return 0;
}
