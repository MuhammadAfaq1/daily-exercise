#include<iostream>
#include<stack>
using namespace std;
 int PriortyCheck(char c){
	if(c =='+' || c == '-')
	return 1;
	
	if(c == '*' || c =='/')
	return 2;
	
	if(c == '^' )
	return 3;
		
		return 0;
		}
 
 	int outcome(int i, int j,int k){
 		if(k=='+')
		 return i+j;
		 
		if(k=='-')
		return j-i;
		
		if(k == '*')
		return j*i;
		
		if(k == '/')
		return j/i;
		
		return -1; 	
	 }
 
 void infix(string exp){
 	int i=0;
 	stack<int> no;
 	stack<char> op;
 	
 	while(exp[i] != '\0'){
 		if(isdigit(exp[i])){
 			no.push((int)exp[i]-48);
			 i++;
		 }
		 else if(op.empty() && no.size() >=2){
		 	char x=exp[i];
		 	int t1=no.top();
		 	no.pop();
		 	int t2=no.top();
		 	no.pop();
		 	int final=outcome(t1,t2,x);
		 	no.push(final);
		 	i++;
		 }
		 
		 else if(!op.empty() && PriortyCheck(exp[i]) <= PriortyCheck(op.top())){
		 	char x = op.top();
		 	op.pop();
		 	int t1=no.top();
		 	no.pop();
		 	int t2=no.top();
		 	no.pop();
		 	int final=outcome(t1,t2,x);
		 	no.push(final);
		 	op.push(exp[i]);
		 	i++;
		 }
		 else{
		 	op.push(exp[i]);
		 	i++;
		 }
	 }
	 
	 while(!op.empty()){
	 	char x=op.top();
	 	op.pop();
	 	int t1=no.top();
	 	no.pop();
	 	int t2=no.top();
	 	no.pop();
	 	int final = outcome(t1,t2,x);
	 	no.push(final);
	 }
	 cout<<no.top();
 }
 
 int main(){
 	
 	string a;
 	cout<<"Enter Expression: ";
 	cin>>a;
 	cout<<"RESULT: ";
 	infix(a);
 }
