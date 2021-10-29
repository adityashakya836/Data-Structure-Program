//Recursive Program for multiplication
#include<iostream>
using namespace std;
int mul(int x,int y){
	if (x < y)
        return mul(y, x);
 
    else if (y != 0)
        return (x + mul(x, y - 1));
 
    else
        return 0;
}
int main(){
	int x=2,y=10;
	cout<<"The product of "<<x<<","<<y<<" is : "<<mul(x,y);
}
