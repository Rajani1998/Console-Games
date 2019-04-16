#include<iostream>
using namespace std;

int arr_min(int ar[],int i,int sz,int min){
	
	if(i>sz) return ar[min];
	else if (ar[i]<ar[min]) return arr_min(ar,i+1,sz,i);
	else if(ar[i]>=ar[min]) return arr_min(ar,i+1,sz,min);
	
}

int main(){
	
	int a[]={12,5,110,4};
	
	cout<<arr_min(a,0,3,0);
	
	return 0;
}
