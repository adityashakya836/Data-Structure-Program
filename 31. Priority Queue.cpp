//Program To Implement Priority Queue
#include<iostream>
#include<malloc.h>

using namespace std;

struct node{
	int priority;
	struct node *next;
};

void printQ(struct node *p){
	while(p!=NULL){
		cout<<p->priority;
		p=p->next;
	}
}

int main(){
	struct node *head;
	head=NULL;
	struct node *newNode;
	int data;
	cout<<"Enter the data(-1 to terminate)";
	cin>>data;
	while(data!=-1){
		struct node *newNode=(struct node*)malloc(sizeof(struct node));
		newNode->priority=data;
		newNode->next=NULL;
		if(head==NULL){
			head=newNode;
		}
		else if(head->priority<newNode->priority){
			newNode->next=head;
			head=newNode;
		}
		else{
			struct node *temp;
			temp=head;
			while(temp->next!=NULL && temp->next->priority>newNode->priority){
				temp=temp->next;
				newNode->next=temp->next;
				temp->next=newNode;
			}
			cout<<"Enter the data(-1 to terminate )";
			cin>>data;
		}
	}
	printQ(head);
}
