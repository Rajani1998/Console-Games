#include<iostream>

using namespace std;

void rev_print(char *a){
	
	if(*a!='\0'){
		rev_print(a+1);
		cout<<*a<<" ";
	}
}

int main(){
	
	char a[]= "abcde";
	rev_print(a);
	return 0;
}
