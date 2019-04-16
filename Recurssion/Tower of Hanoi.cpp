#include<iostream>
using namespace std;

void hanoi(int n,char a,char b,char c){
	if(n<=1){
		cout<<endl<<a<<" ---> "<<b;
		return;
	}
	else{
		
		hanoi(n-1,a,c,b);
		hanoi(1,a,b,c);
		hanoi(n-1,c,a,b);
		
	}
}

int main(){
	
	hanoi(3,'A','B','C');
	
	return 0;
}
