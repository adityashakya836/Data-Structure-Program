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

//Print the element of BST
int inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->value<<" ->";
        inorder(root->right);
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

struct node *minValueNode(struct node *node){
    struct node *current =node;
    while(current && current->left!=NULL){
        current=current->left;
    }
    return current;
}
//Delete a Node
struct node *deleteNode(struct node *root,int value){
    if (root=NULL){
        return root;
    }
    if(value<root->value){
        root->left=deleteNode(root->left,value);
    }
    else if(value>root->value){
        root->right=deleteNode(root->right,value);
    }
    else{
        if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        }

        struct node *temp=minValueNode(root->right);
        root->value=temp->value;
        root->right=deleteNode(root->right,temp->value);
    }
    return root;
}

int main(){
    struct node *root=NULL;

    int choice;
    while (1)
    {
        /* code */
        cout<<"\n1. Insert\n2. Delete\n3. Print\n4. Exit\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            int data;
            cout<<"Enter value to be inserted : ";
            cin>>data;
            root=insert(root,data);
            break;
        case 2:
            int delete_val;
            cout<<"Enter the value to be deleted : ";
            root=deleteNode(root,delete_val);
            break;
        case 3:
            print(root);
            break;
        case 4:
            exit(1);
            break;
        default:
            break;
        }
    }
    
}
