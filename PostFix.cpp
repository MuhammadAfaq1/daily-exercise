#include<iostream>
#include<stack>
using namespace std;
 int PriortyCheck(char c){
 	
 	switch(c)
	 { 
	case'+' ||  '-':
	return 1;
	break;
	
	case'*' :
	return 2;
	break;
	
	case '/':
	return 2;
	break;

	case '^' :
	return 3;
	break;
	
		default:
		return 0;
			}
		}
		
string PostFix(string value){
		
		int i=0;
		string eq="";	
		stack<int> stk;
		
		while(value[i]!='\0'){
			if(value[i]>='a' && value[i]<='z' || value[i]>='A' && value[i] <='Z'){
				eq+=value[i];
				i++;
			}
			else if(value[i]=='('){
				stk.push(value[i]);
				i++;
			}
			else if(value[i]==')')
			{
				while(stk.top()!='('){
					eq+=stk.top();
					stk.pop();
				}
				stk.pop();
				i++;
			}
			else{
			
			while(!stk.empty() && PriortyCheck(value[i]) <= PriortyCheck(stk.top())){
				eq+=stk.top();
				stk.pop();
			}
			stk.push(value[i]);
			i++;
		}
	}
	while(!stk.empty()){
		eq+=stk.top();
		stk.pop();
	}
	
	cout<<"POSTFIX: "<<eq<<endl;
	return eq;
}



int main(){
	
	string a;
	cout<<"Infix Expression: ";
	cin>>a;
	PostFix(a);
}
