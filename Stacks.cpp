#include<iostream>
using namespace std;

class Stacks{
	private:
	struct node{
		
	int data;
	node* down;
};
	node* top;
	
	public:
	Stacks(){
		top=NULL;
	}

		void push(int value){
			node* n=new node;
			n->data=value;
			n->down=top;
			top=n;
		}
		
		void pop(){
			node* temp;
			temp=top;
			node* popped;
			if(top==NULL){
				cout<<"STACK OVERFLOW"<<endl;	
			}
			else
		{
		//	cout<<top->data<<" POPPED"<<endl;
				top=top->down;
				popped=temp;
				
				delete temp;						
			}
		}
		
		void Display(){
			node* temp=top;
			cout<<"STACK: ";
			if(top==NULL)
			cout<<"EMPTY"<<endl;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->down;
			}
			cout<<endl;
		}
		
		void binaryConvert(int val){
			int bi=0;
			while(val>=1){
				bi=val%2;
				push(bi);
				val/=2;
			}
			Display();
		}
		
		bool BracesCheck(string exp){
			char temp;
			for(int i=0;i<exp.size();i++){
					temp=exp[i];
				if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
				push(temp);
				else if(exp[i]=='}' || exp[i]==']' || exp[i]==')'){
					if(top->data =='{' && exp[i] == '}' ||
					   top->data =='[' && exp[i] == ']' ||
					   top->data =='(' && exp[i] == ')')
					   pop();
				}
				
			}
			if(top==NULL){
			cout<<"VALID "<<endl;	
			return true;}
			else {
			cout<<"INVALID "<<endl;	
			return false;
		}}
};

int main(){
	Stacks st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.Display();
//	st.pop();
//		st.pop();
//			st.pop();
//	st.Display();
//	st.binaryConvert(4);
	cout<<"Statement: ({uh([])})"<<endl;
	st.BracesCheck("({uh([])})");
}
