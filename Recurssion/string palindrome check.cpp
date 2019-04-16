#include<iostream>
using namespace std;

int pal(char *a,int st,int end){
	
	if(st>end) return 1;//is pallindrome
	else if(a[st] == a[end]) return pal(a,st+1,end-1); // not pallindrome
	else return 0; 
	
}

int main(){
	
	char a[]="madam";
	
	cout<<pal(a,0,4);
	
	return 0;
}
