#include<iostream>
using namespace std;

void changeXY(char *arr){
	
	if(*arr=='\0')return;
	else if(*arr=='x')*arr='y';
	changeXY(++arr);
	
}

int main(){
	
	char a[]="abcxy";
	changeXY(a);
	cout<<a;
}
