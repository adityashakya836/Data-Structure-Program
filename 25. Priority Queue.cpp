//Program to Implement Priority Queue
#include<iostream>
using namespace std;
#include<queue>

void priorityQueue(priority_queue<int> pQ){
	priority_queue<int> p=pQ;
	while(!p.empty()){
		cout<<'\t'<<p.top();
		p.pop();
	}	
	cout<<'\n';
}

int main(){
	priority_queue<int> pq;
	pq.push(10);
	priorityQueue(pq);
}
