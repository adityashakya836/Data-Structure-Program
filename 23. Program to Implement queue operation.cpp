//Program to implement queue (inestion() and deletion())
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
int Insert(int val) {
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      rear++;
      queue[rear] = val;
   }
}
int Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
int Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
	Insert(34);
	Insert(23);
	Insert(68);
	Insert(45);
	Delete();
	Display();
}
