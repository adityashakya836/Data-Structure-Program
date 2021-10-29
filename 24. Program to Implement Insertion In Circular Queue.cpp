//Program to implement Insertion in Circular Queue

#include<iostream>
using namespace std;

int circularQueue[100];
int rear=-1;
int front =-1,n=100;

int Insertion(int val){
	if((front==0 && rear==n-1)||(front==rear+1)){
		cout<<"Queue Overflow";
	}
	if(front==-1){
		front=0;
		rear=0;
	}
	else{
		if(rear==n-1){
			rear=0;
		}
		else{
			rear=rear+1;
		}
	}
	circularQueue[rear]=val;
}
int displayCQ() {
   int f = front, r = rear;
   if (front == -1) {
      cout<<"Queue is empty"<<endl;
   }
   cout<<"Queue elements are :\n";
   if (f <= r) {
      while (f <= r){
         cout<<circularQueue[f]<<" ";
         f++;
      }
   } else {
      while (f <= n - 1) {
         cout<<circularQueue[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<circularQueue[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
int main(){
	Insertion(2);
	Insertion(34);
	Insertion(23);
	Insertion(32);
	displayCQ();
}
