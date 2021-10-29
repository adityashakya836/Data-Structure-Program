//Program For Bubble Sort

#include<iostream>
using namespace std;

int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int BubbleSort(int arr[],int n){
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){
	int n,temp;
	cout<<"Enter number of elements in array : ";
	cin>>n;
	int arr[n]={};
	
	for(int i=0;i<n;i++){
		cout<<"Enter number at position "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Array Before Sorting\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	BubbleSort(arr,n);
	
	cout<<"\nArray After Sorting\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
