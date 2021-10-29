// Program to initialize all the elements of the array

#include<iostream>
using namespace std;

int main(){
	
	int no_of_elements;
	int arr[no_of_elements]={};
	cout << "How many elements do you want to enter in array : ";
	cin >> no_of_elements;
	
	for (int i=0;i<no_of_elements;i++){
		int ele;
		cout << "Enter the elements : ";
		cin >> ele;
		arr[i]=ele;
		
	}
	for (int j=0; j<no_of_elements;j++){
		cout << arr[j] <<" ";
	}
}
