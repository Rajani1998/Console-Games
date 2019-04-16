#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

class Map{
	
	private:
		int row;
		int col;
		int slots;
		int **arr;
		
	public:
		
		Map(){
			row = slots = 8;
			col = 5;
			//Dynamic Memory Allocation
			arr = new int*[row];
			for(int i=0;i<row;i++){
				*(arr+i) = new int [col];
			}
			
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					arr[i][j] = 0;
				}
			}
		}
		
		void generateMap(){
			srand(time(NULL));
			arr[0][rand() % col] = 1;
			for(int i=1;i<slots;i++){
				int z;
				for(int j=0;j<col;j++){
					if(arr[i-1][j] == 1){
						z = j;
						break;
					}
				}
				
				if(z==0)	arr[i][z+rand()%2] = 1;
				else if(z==col-1) 	arr[i][z-rand()%2] = 1;
				else 	arr[i][ z + (rand()%3)-1] = 1;
			//	cout<<"\nDone";
			}
			
			//cout<"\nAll DOne";
		}
		
		void printMap(int r){
			cout<<"\t 0 1 2 3 4\n"<<"\t - - - - - \n";
			for(int i=0;i<=r;i++){
				cout<<"Slot # "<<i+1;
				for(int j=0;j<col;j++){
					if (arr[i][j]==1) cout<<" X";
					else cout<<" O";
				}
				cout<<endl;
			}
		}
		
		void print(){
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					cout<<arr[i][j];
				}
				cout<<endl;
			}
		}
		
		void move(int i,int j){
			static int turn = 0;
			turn++;
			printMap(i);
			if(turn >=25)cout<<"OUT OF TURNS";
			else if(i==row-1) cout<<"YOU WON";
			else if(arr[i][j]==1){
				cout<<"Right Move\nEnter the next col ("<<turn+1<<"/15): ";
				cin>>j;
				move(i+1,j);
			}
			else {
				system("CLS");
				cout<<"Incorrect Move\nEnter the 1st col("<<turn+1<<"/15): ";
				cin>>j;
				move(0,j); 
			}
		}
		
		~Map(){
			for(int i=0;i<row;i++)	delete [] arr[i];
			delete [] arr;
		}
};

int main(){
	
	Map M1;
	cout<<"Created";
	M1.generateMap();
	cout<<"\nGenerated\n";
//	M1.print(); //checking the guide map
	int k;
	cout<<"Enter the col you want to move (1/15): ";
	cin>> k;
	M1.move(0,k);
	
	return 0;
}
