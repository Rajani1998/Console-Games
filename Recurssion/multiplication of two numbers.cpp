#include<iostream>
using namespace std;

int my(int a,int b){
	if (b==1)return a;
	else return a+my(a,b-1);
}

int main(){

	cout<<my(7,4);

}
