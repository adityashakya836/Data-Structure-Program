//Stack Implementation (push() and pop() operation)

#include<iostream>
using namespace std;

int stack[100],n=100,top=-1;
void push(int val){
	if(top>=n-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		stack[top]=val;
	}
}
void pop(){
	if(top<=-1){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		cout<<"\nThe popped element is "<<stack[top]<<endl;
		top--;
	}
}
void display(){
	if(top>=0){
		cout<<"Stack element : "<<"\n";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}
	else{
		cout<<"Stack is empty";
	}
}

int main(){
	push(30);
	push(20);
	push(90);
	push(40);
	display();
	pop();
	pop();
	pop();
	pop();
	display();
}

//#include <iostream>
//using namespace std;
//int stack[100]; int n=100;int top=-1;
//void push(int val)
//{  if(top>=n-1)
//	cout<<"stack is overflow";
//    else {
//	top++;
//	stack[top]=val;
//}
//}
//void pop(){
//	if(top<=-1){
//		cout<<"stack is underflow";
//	}
//	else{
//		cout<<"deleted element in stack\n"<<stack[top];
//		top--;
//	}
//}
//void display(){
//	if(top>=0){
//	cout<<"stack element:\n";
//	for(int i=top;i>=0;i--){
//	cout<<stack[i]<<"\n";
//}
//}
//	else
//	cout<<"stack is empty";
//}
//int main(){
//    push(30);
//    push(20);
//    push(10);
//    display();
//    pop();
//}
