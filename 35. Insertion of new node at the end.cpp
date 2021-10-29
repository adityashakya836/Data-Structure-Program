#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*head;
int dispaly(struct node *p){
	while(p!=NULL){
		cout<<p->data;
		p=p->next; 
	}
}
int lastinsertNode(int item){
	struct node *lastNode=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	if(lastNode==NULL){
		cout<<"Overflow\n";
	}
	else{
		lastNode->data=item;
		if(head==NULL){
			lastNode->next=NULL;
			head=lastNode;
			cout<<"Node Inserted\n";
		}
		else{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=lastNode;
			lastNode->next=NULL;
			cout<<"Node Inserted\n";
		}
	}
}
int main(){
	int choice,item;
	do{
		cout<<"Enter the Item which you want to insert : ";
		cin>>item;
		lastinsertNode(item);
		cout<<"Enter 1 to insert more data and 0 for exit : ";
		cin>>choice;
	}while(choice==1);

}

