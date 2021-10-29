// Program for Linear Search

#include<iostream>
using namespace std;

int main(){
	int no_of_elements,number_to_search;
	cout<<"Enter the number of elements in the array\n";
	cin>>no_of_elements;
	int arr[no_of_elements];
	for(int i=0;i<no_of_elements;i++){
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search in the array : ";
	cin>>number_to_search;
	int i=0;
	while(arr[i]){
		if(arr[i]==number_to_search){
			cout<<"Found at "<<i+1<<" ";
		}
		i++;
	}
}
