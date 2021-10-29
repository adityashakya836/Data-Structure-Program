//Program to find largest, second largest, and smallest element of an array
#include<iostream>
using namespace std;
int main(){
	int arr[100]={20,31,87,90,88,7};
	//To find maximum element of an array
	int i =1;
	int max=arr[0];
	int min=arr[0];
	while(arr[i]){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(arr[i]<min){
			min=arr[i];
		}
		i++;
	}
	cout<<"The maximum element of the array : "<<max<<"\n";
	cout<<"The minimum element of the array : "<<min <<"\n";
}
