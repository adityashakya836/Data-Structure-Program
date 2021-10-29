//Program to Find Pairs of maximum product in an array
#include<iostream>
using namespace std;

int maxProduct(int arr[],int n){
	int x=arr[0],y=arr[1];
	if(n<2){
		cout<<"No pairs found";
	}

	else{
		for(int i=0;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(arr[i]*arr[j]>x*y){
					x=arr[i];
					y=arr[j];
				}
			}
		}
	}
	cout<<"("<<x<<","<<y<<")";
}

int main(){
	int arr[]={-12,-3,5,-9,-1};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nRequired pair is of maximum product is :\n";
	maxProduct(arr,size);
	return 0;
}

