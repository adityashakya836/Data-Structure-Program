//Program for Insertion in Linked List

#include<iostream>
#include<malloc.h>
using namespace std;
//Initializaiton of Node
struct node{
	int value;
	struct node *next;
};

//Function to print the linked list
int printL(struct node *p){
	int i=0;
	while(p!=NULL){
		cout<<p->value<<"->";
		p=p->next;
		i++;
	}
	cout<<"\nNumber of Nodes in the linked List : "<<i;
}

//Function For Search
int search(struct node *p){
	int data;
	int i=1;
	if(p==NULL){
		cout<<"List Empty";
	}
	else{
		cout<<"Enter the value of node you want to search : ";
		cin>>data;
		while((p!=NULL)&&(p->value!=data)){
			p=p->next;
			i++;
		}
		if(p==NULL){
			cout<<"Data Not Found";
		}
		else{
			cout<<"Data Found at node "<<i;	
		}
	}
}
//main function
int main(){
	struct node *head;
	head=NULL;
	struct node *newNode;
	int data;
	cout<<"Enter the data(-1 to terminate) : ";
	cin>>data;
	
	while(data!=-1){
		newNode=(struct node*)malloc(sizeof(struct node));
		newNode->value=data;
		newNode->next=head;
		head=newNode;
		if(head==NULL){
			head=newNode;
		}
		cout<<"Enter the data(-1 to terminate) : ";
		cin>>data;
	}
	printL(head);
	search(head);
}

