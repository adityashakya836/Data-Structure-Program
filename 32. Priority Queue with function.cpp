//Priority Queue 

#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;

//Function for Enqueue
void enqueue(int x){
	struct node* newNode=NULL;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=x;
	newNode->next=NULL;
	
	if(head==NULL){
		head=newNode;
	}
	else if(head->data<newNode->data){
		newNode->next=head;
		head=newNode;
	}
	else{
		struct node* temp=head;
		while(temp->next!=NULL && temp->next->data>newNode->data){
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
}

//Function for dequeue
void dequeue(){
	struct node* temp=head;
	head=head->next;
	free(temp);
}

int max(){
	return head->data;
}

int main(){
	enqueue(6);
	enqueue(5);
	enqueue(9);
	enqueue(40);
	while(head!=NULL){
		cout<<"deleted node is : "<<max()<<"\n";
		dequeue();
	}
}
