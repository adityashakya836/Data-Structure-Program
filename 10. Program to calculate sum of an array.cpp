//Program to calculate sum and average of elements of an array

#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,45,60};
	float sum = 0;
	int i = 0;
	int count =0;
	while(arr[i]){
		sum=sum+arr[i];
		i++;
		count++;
	}
	cout << "The sum of elements of array is : " << sum <<"\n";
	float average=sum/count;//Average
	cout << "The average of elements of array is : " << average;
}
