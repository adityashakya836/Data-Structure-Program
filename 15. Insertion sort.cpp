//Program for Insertion sort

#include<iostream>
using namespace std;

int main(){
	int n;int key,j;
	cout<<"Enter number of elements in array : ";
	cin>>n;
	int arr[n]={};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
/*
Time complexity:
	1. Best Case = omega(n)
	2. Worst Case = big-oh(n^2)
# Simple Implementation
# Efficient for small Data Set
# Insertion sort is an inplace sort technique
# It is adaptive
# It is stable
*/
