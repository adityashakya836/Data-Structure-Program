#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int data;
	struct node *left, *right;
};


struct node *createnew(){
	struct node *temp;
	int value;
	temp=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter your choice 0 for exit and 1 for new node : ";
	cin>>value;
	if(value==0){
		return 0;
	}
	else{
		temp->data=value;
		cout<<"\nEnter left child data \n";
		cin>>value;
		temp->left=createnew();
		cout<<"\nEnter at right child data : \n";
		cin>>value;
		temp->right=createnew();
		return temp;
	}
}

int main(){
	struct node *root=createnew();
}
