//Program for Binary Search Tree
#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
    int value;
    struct node *left;
    struct node *right;
};
//Node Creation
struct node *newNode(int item){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->value=item;
    temp->left=temp->right=NULL;
    return temp;
}

//Inorder of BST
int inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->value<<" ->";
        inorder(root->right);
    }
}
//Post order of BST
int postOrder(struct node *root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->value<<" ->";
	}
}
//Preorder of BST
int preOrder(struct node *root){
	if(root!=NULL){
		cout<<root->value<<" ->";
		preOrder(root->left);
		preOrder(root->right);
	}
}

//Insert a node
struct node *insert(struct node *node,int value){
    if(node==NULL){
        return newNode(value);
    }
    if(value<node->value){
        node->left=insert(node->left,value);
    }
    else{
        node->right=insert(node->right,value);
    }
    return node;
}

int main(){
    struct node *root=NULL;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,17);
    root=insert(root,9);
    root=insert(root,11);
    root=insert(root,16);
    root=insert(root,18);
    
    cout<<"Inorder of BST is : ";
    inorder(root);
    cout<<"\n";
    cout<<"Preorder of BST is : ";
    preOrder(root);
    cout<<"\n";
    cout<<"Postorder of BST is : ";
    postOrder(root);
    cout<<"\n";
    
}
