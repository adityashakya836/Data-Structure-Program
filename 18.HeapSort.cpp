//Program for Implementation for HeapSort

#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b=temp;
}

//Heapify Function
void heapify(int arr[],int n, int i){
	int max = i;
	int left_node=2*i+1;
	int right_node=2*i+2;
	if(left_node<n && arr[left_node]>arr[max]){
		max=left_node;
	}
	if(right_node<n && arr[right_node]>arr[max]){
		max=right_node;
	}
	if(max!=i){
		swap(&arr[i],&arr[max]);
		heapify(arr,n,max);
	}
 }
 
//HeapSort Function
void heapSort(int arr[], int n){
	for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
 	
	for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
//main function 
int main(){
	int n;
	cout<<"Enter the number of element in the array: ";
	cin>>n;
	int arr[n]={};
	for(int i=0;i<n;i++){
		cout<<"Enter element at index "<<i<<" : ";
		cin>>arr[i];
	}
	heapSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

//Summary HeapSort
/*
Time Complexity:
	1. Best Case = big-omega(nlogn)
	2. Worst Case = big-o(nlogn)
It is not stable
Heap Sort is inplace
It is not adaptive
*/

