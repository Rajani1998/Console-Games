#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}

void insert(int arr[],int i,int j,int sz,int min){
	
	if(i>=sz) return;
	else if(j>=sz) insert(arr,i+1,0)
	else if(arr[min]>arr[i])
}
