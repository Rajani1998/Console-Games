/* CODED BY MEHDI RAZA RAJANI

ASSIGNMENT # 2

5 (CALCULATING THE VALU OF PIE)

*/
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	
	double a=0,b;

	srand( unsigned(time(NULL)) );
	
	for (int i=0; i<5000000; i++){
		
		double x,y;

		x=(double)rand()/(RAND_MAX+1);
		
		y=(double)rand()/(RAND_MAX+1);
		
		if((x*x) + (y*y)<=1) a++;
	
	}
		cout<<a<<endl;
		
		b = 4 * a / 5000000;
		
		cout<<b;
		
	return 0;
}
