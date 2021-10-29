// Program to print increment or decrement each element of the array.(Subtract 2 from each elements of the array.

#include<iostream>
using namespace std;

int main(){
	int arr[]={92,84,56,23,45};
	for(int i=0; i<5;i++){
		arr[i]=arr[i]-2;
		cout << arr[i] <<"\n";
	}
}
