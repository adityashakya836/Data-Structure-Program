//Program for Binary Search
#include <iostream>
using namespace std;
int BinarySearch(int arr[],int x,int low,int high){
	
	if(high>=low){
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x)
			return BinarySearch(arr,x,low,mid-1);
		return BinarySearch(arr,x,mid+1,high);
	}
	return -1;
}
int main(void){
	int array[]={1,2,3,4,5,9,10,18};
	int n=sizeof(array)/sizeof(array[0]);
	int element;
	cout << "Enter the element to be search : ";
	cin>>element;
	int result = BinarySearch(array,element,0,n-1);
	if(result==-1){
		cout << "Element not found";
	}
	else{
		cout << "Element found at index " << result;
	}
	return 0;
}
