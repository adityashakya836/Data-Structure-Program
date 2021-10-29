//Program to implement Stack using linked list

#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*top=NULL;
int item;
void push(){
	struct node *ptr;
	cout<<"Enter item : ";
	cin>>item;
	if(top==NULL){
		top=(struct node*)malloc(sizeof(struct node));
		top->data=item;
		top->next=NULL;
	}
	else{
		ptr=top;
		top=(struct node*)malloc(sizeof(struct node));
		top->data=item;
		top->next=ptr;
	}
	cout<<"Item Inserted : "<<item<<"\n\n";
}

void pop(){
	struct node *ptr;
	if(top==NULL){
		cout<<"Stack is empty";
	}
	else{
		ptr=top;
		item=top->data;
		top=top->next;
		free(ptr);
		cout<<"item deleted : "<<item;
	}
}
void display(){
	struct node *ptr;
	if(top==NULL){
		cout<<"stack is empty";
	}
	else{
		ptr=top;
		cout<<ptr->data;
		ptr->next;
	}
}

int main(){
	int ch;
	do{
		cout<<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Invalid Choice\n";
		}
	}while(1);
}
