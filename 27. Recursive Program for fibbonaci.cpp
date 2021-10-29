//Recursive program for fibbonaci
#include<iostream>
using namespace std;
int fib(int n){
	if(n==1||n==0){
		return n;
	}
	else{
		return(fib(n-1)+fib(n-2));
	}
}
int main(){
	int n=10;
	int i=0;
	cout<<"Fibonnaci series\n";
	while(i<n){
		cout<<" "<<fib(i);
		i++;
	}
}
