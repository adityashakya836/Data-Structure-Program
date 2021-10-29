//Program For Quick Sort
#include<iostream>
using namespace std;

int swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i = low-1;
	for(int j=low;j<=high-1;j++){
		if(arr[j]<pivot){
			i=i+1;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i + 1);
}

//Quick Sort Function
int QuickSort(int arr[],int low,int high){
	if(low<high){
		int part=partition(arr,low,high);
		QuickSort(arr,low,part-1);
		QuickSort(arr,part+1,high);
	}
}

//Main Function
int main(){
	int n;
	cout<<"Enter number of elements in the array : ";
	cin>>n;
	int arr[n]={};
	for(int i=0;i<n;i++){
		cout<<"Enter element at position "<<i+1<<" : ";
		cin>>arr[i];
	}
	QuickSort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
