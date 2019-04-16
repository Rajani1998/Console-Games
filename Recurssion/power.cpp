#include<iostream>

using namespace std;

int pow(int a,int b){
	
	if(b==1)return a;
	else return a*pow(a,b-1);
	
}

int main(){
	cout<<pow(3,4);
}
