#include<iostream>
using namespace std;

int linearSearch(int arr[],int i,int sz,int key){
	if(i>=sz)return -1;
	else if(arr[i]==key)return i;
	else linear(arr,i+1,sz,key);
}

int main(){
	
	int arr[]={1,6,1,8,5,4,5};
	
	cout<<linearSearch(arr,0,6,8);
	
	return 0;
}
