//Program for Count the number of elements in the array
#include<iostream>
using namespace std;
int main(){
	int arr[]={10, 10, 30, 40, 50};//Declaration and initialization of an array
	int count = 0;
	for(int i=0;i<5;i++){
		count += 1;
	}
	cout << "The total number of elements in array is ";
	cout << count;
	return 0;
	
}
