#include <iostream>
using namespace std;
int n=100;

class queue{
	int * arr;
	int front;
	int back;

public:
queue(){
	arr = new int[n];
	front = -1;
	back= -1 ;
}	

void push(int val){
	if(back == n-1){
	cout<<"queue overflow"<<endl;
	return ;}
	
	back++;
	arr[back]=val;
	
	if(front = -1){
		front++;
	}
	
	
}

void pop(){
	if(back<front || front == -1){
		cout<<"No Entry to pop"<<endl;
	return;
	}
	front++;
}

int peek(){
	if(back<front || front == -1){
		cout<<"No Entry in queue"<<endl;
		return -1;
	}
	cout<<arr[front]<<endl;
	return arr[front];
}

bool empty(){
		if(back<front || front == -1){
		return true;
	}
	return false;
}

void  display(){
	if(back<front || front == -1){
		cout<<"No Entry in queue"<<endl;
		return ;
	}
	for (int i=front+1;i<back+1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
};

int main(){
	
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);	
	q.push(5);
	q.display();
	q.pop();
	q.display();
	q.pop();
	q.peek();
	}
