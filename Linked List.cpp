#include<iostream>
using namespace std;
class List;
class Node{
	int data;
public:	Node * next;
	
	public: Node(int data):data(data),next(NULL){}
	
	public: int getData(){
		return data;
	}
	
	~Node(){
		if( next != NULL){
			delete next;
		}
		cout<<data<<" deleted!"<<endl;
	}
	
	friend class List;
};

class List{
	
	Node * head;
	Node * tail;
	public: List():	head(NULL),tail(NULL){}
	

	void insert_first(int data){
		
		if(head == NULL){
			Node * n=new Node(data);
			head = tail = n;
		}
		else 
		{
			Node * n=new Node(data);
			n->next = head;
			head = n; 
		}
	}
	 void insert_last(int data){
		if(head == NULL){
			Node * n=new Node(data);
			head = tail = n;
			}
			else
			{
				Node * n=new Node(data);
				tail->next=n;
				tail=n;
			}
	}
	
	void print(){
		if(head == NULL){
		cout<<"Empty List!";
		}
		else
	
		while( head != NULL){
			cout<<head->getData()<<"->";
			head=head->next;
		}
	}
	void inerst_at(int data,int position){
		if(position == 0){
			insert_first(data);
			return;
		}
		else{
		
		Node* temp=head;
		for(int jump=1;jump<position;jump++){
			temp=temp->next;
		}
		Node* n=new Node(data);
		n->next=temp->next;
		temp->next=n;
	}
	}
	
	int search(int key){
		Node* temp=head;
		int index=0;
		while(temp != NULL){
			if(temp->getData() == key )
			return index;
			index++;
			temp=temp->next;
		}
		return -1;
	}
	
	void deleteAtHead(){
		Node * temp=head;
		head=head->next;
		delete temp;
	}  
	
	
	void deleteAT(int value){
		
		if(head == NULL)
		return;
		
		if(head->next==NULL){
		deleteAtHead();
		return;}
		
		Node* temp=head;
		
		while(temp->next->data != value){
			temp=temp->next;
		}
		
		Node* todelete=temp->next;
		temp->next=temp->next->next;
		
		delete todelete;
	}
	
	Node* reverse(){
		Node* prev=NULL;
		Node* curr=head;
		Node* next;
		
		while(curr != NULL){
			next=curr->next;
			curr->next=prev;
			
			prev=curr;
			curr=next;
		}
	return prev;	 
	}
		~List(){
		if(head != NULL){
			delete head;
			head = NULL;
		}
	}

};
int main(){
	List l;
	Node* head=NULL;
	l.insert_first(2);
	l.insert_last(3);
	l.insert_first(1);
	l.insert_first(0);
	
	l.print();
	return 0;
}
