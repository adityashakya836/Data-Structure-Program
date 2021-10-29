//Program to Selection Sort

#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[]={21,2,45,1,8,50,34,23};
	n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

/*
Time Complexity:
	1. Worst Case=O(n^2)
	2. Best Case= omega(n^2)
It is not adaptive
Selection sort is Stable
One of the inplace sorting technique
*/
