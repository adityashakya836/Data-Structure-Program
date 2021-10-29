//Program for Linked List
#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int value;
	struct node *next;
};
//Print the list
void printL(struct node *p){
	while(p!=NULL){
		cout<<p->value<<" ";
		p=p->next;
	}
}
int main(){
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	
	one = (struct node*)malloc(sizeof(struct node));
	two = (struct node*)malloc(sizeof(struct node));
	three = (struct node*)malloc(sizeof(struct node));
	
	one->value=1;
	two->value=2;
	three->value=3;
	
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	head =one;
	printL(head);
}
