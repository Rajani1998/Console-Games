#include<iostream>

using namespace std;

void print(char *a){
	
	if(*a!='\0'){
		cout<<*(a++)<<" ";
		print(a);
	}
}

int main(){
	
	char a[]= "fsffa";
	print(a);
	return 0;
}
