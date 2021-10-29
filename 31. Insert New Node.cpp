//Program for Node Insetion In Linked List
#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {

        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}
struct node *head=NULL;

int insertBeginning(int data){
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=head;
	head=newNode;
}
int main(){
	struct node *head;
	int data;
	cout<<"Enter the data, enter -1 to stop : ";
	cin>>data;
	while(data!=-1){
		cout<<"Enter the data : ";
		cin>>data;
		insertBeginning(data);
		displayList();
	}
}
