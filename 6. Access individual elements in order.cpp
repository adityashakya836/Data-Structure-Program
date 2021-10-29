//Program to access individual element in order

#include<iostream>
using namespace std;

int main(){
	
	int no_of_elements;
	int temp;
	int arr[no_of_elements]={};
	cout << "How many elements do you want to enter in array : ";
	cin >> no_of_elements;
	
	for (int i=0;i<no_of_elements;i++){
		int ele;
		cout << "Enter the elements : ";
		cin >> ele;
		arr[i]=ele;
		
	}
	for (int i=0; i<no_of_elements;i++){
		for (int j=i+1;j<no_of_elements;j++){
			if (arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for (int i=0;i<no_of_elements;i++){
		cout << arr[i] << " ";
	}
}
