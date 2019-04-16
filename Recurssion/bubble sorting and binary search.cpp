#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}

void bubble(int arr[],int i,int j,int sz){
	
	if(i>=sz)return;
	else if(j>=sz)bubble(arr,i++,0,sz);
	if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
		bubble(arr,i,j++,sz);
	}
	if(arr[i]<=arr[i+1]) bubble(arr,i,j++,sz);
	
}

int binary(int arr[],int key,int st,int end){
	int mid = (st+end)/2;
	if(st>end)return -1;
	else if(arr[mid]>key)binary(arr,key,mid+1,end);
	else if(arr[mid]<key)binary(arr,key,st,mid-1);
	else if(arr[mid]==key)return mid;
	
}

int main(){
	
	int arr[]={8,9,4,5,1};
	
	bubble(arr,0,0,4);
	for(int i=0;i<5;i++)cout<<arr[i];
	
	return 0;
}
