#include <iostream>
using namespace std;
class node{
		public:
	node* next;
	node* prev;
	int data;

		 node(int value){
		 	data=value;
		 	next=NULL;
		 	prev=NULL;
		 }	 
};

void  insertAtHead(node* &head , int val){
	
	node* n =new node(val);
	n->next = head;
	if(head!=NULL)
	head->prev=n;
	 
	head=n;
}

void insertAtTail(node* &head , int val ){
	if (head==NULL){
		insertAtHead(head, val);
		return;
		}
	
	node* n=new node(val);
	node* temp =head;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=n;
	n->prev=temp;	
}
	
	void  deleteAtHead(node * & head){
		cout<<"head node deleted"<<endl;
		node* toDelete=head;
		head = head -> next;
		head -> prev = NULL;
		
		delete toDelete;
	}
	
	void Delete(node*  &head , int pos){
		cout<<"Node at position "<<pos<<" deleted"<<endl;
		if(pos == 1){
			deleteAtHead(head);
			return;
		}
		
		node* temp=head;
		int count = 1;
		while(temp!=NULL && count != pos ){
			temp=temp->next;
			count++;
		}
		temp->prev->next=temp->next;
		
		if(temp->next != NULL)
		temp -> next -> prev = temp -> prev;
		
		delete temp;
	}
	
	void display(node* head){
	node* temp=head;
		cout<<"Doubly linked list: ";
	while(temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	
	}
	cout<<endl;
	}
	
void moveToHead(node* &head , int num){

		
		node * temp=head;
	 
		while(temp!=NULL){
			if(head->data==num)
				return;
			
			temp=temp->next;
			
			if(temp->data == num){
				cout<<num<<" moved to head"<<endl;
				if(temp->next != NULL){
			
				temp->prev->next=temp->next;
				temp->next->prev=temp->prev;
				}
				else if(temp->next == NULL){
				
				temp->prev->next=NULL;
				}
				
				head->prev=temp;
				temp->next=head;
				temp->prev=NULL;
				head=temp;
				
				return;
			}
			
//			if(temp->next==NULL && temp->data!=num)
//			cout<<num<<" Not found"<<endl;			
		
	  }
	  
	}


int main(){
	node * head=NULL;
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtHead(head,1);
	display(head);
	//Delete(head,2);
	//deleteAtHead(head);
	moveToHead(head,4);
	display(head);
}
