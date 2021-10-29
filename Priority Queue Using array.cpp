//Program to implement using array

#include<iostream>
#define N 20
using namespace std;

int Q[N],Pr[N];
int r=-1,f=-1;

int enqueue(int data,int p){
	int i;
	if(f==0 && r==N-1){
		cout<<"Queue is Full\n";
	}
	else{
		if(f==-1){
			f=r=0;
			Q[r]=data;
			Pr[r]=p;
		}
		else if(r==N-1){
			for(i=f;i<=r;i++){
				Q[i-f]=Q[i];
				Pr[p-f]=Pr[i];
				r=r-f;
				f=0;
				for(i=r;i>f;i--){
					if(p>Pr[i]){
						Q[i+1]=Q[i];
						Pr[i+1]=Pr[i];
					}
					else{
						break;
					}
					Q[i+1]=data;
					Pr[i+1]=p;
					r++;
				}
			}
		}
		else{
			for(i=r;i>=f;i--){
				if(p>Pr[i]){
					Q[i+1]=Q[i];
					Pr[i+1]=Pr[i];
				}
				else{
					break;
				}
				Q[i+1]=data;
				Pr[i+1]=p;
				r++;
			}
		}
	}
}
int print(){
	int i;
	for(i=f;i<=r;i++){
		cout<<"Element= "<<Q[i]<<"Priority= "<<Pr[i]<<"\n";
	}
}

int dequeue(){
	if(f==-1){
		cout<<"Queue is empty";
	}
	else{
		cout<<"deleted element "<<Q[f]<<"\n";
		cout<<"Its priority "<<Pr[f]<<"\n";
		if(f==r){
			f=r=-1;
		}
		else{
			f++;
		}
	}
}

int main(){
	int choice;
	while(1){
		cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Quit\n";
		cout<<"Enter Your choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				int data,priority;
				cout<<"Enter data : ";
				cin>>data;
				cout<<"Enter priority";
				cin>>priority;
				enqueue(data,priority);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				print();
				break;
			case 4:
				exit(1);
			default:
				cout<<"Wrong choice";
		}
	}
}
