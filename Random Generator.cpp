/*Bracketing Search

Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
The program must let the user continue to guess until the user correctly guesses the number*/

#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main() {

	int j,a;

  	srand (time(NULL));

	j = rand() % 100 + 1;
	
	do{
		cin>>a;
		
		 if (a>j) { cout<<"too high\n";
		}
		
		else if (a<j) { cout<<"too low\n";
		}
				
		else { cout<<"wonderfull\n";
		} 
		
		
	} while( a=j );
 
    return 0;
 } 
