#include <iostream>
#include <string.h>
using namespace std;
bool Palindrome(char arr[1000]){
	
}
int main(){
    string  String;
	cin>>String;
	int l=0;
	int h=String.length()-1;
	bool check=true;
	
	while(h>l){
		if(String[l++]!=String[h--])
		check=false;
	}
	

	if(check==false){
		cout<<"Given String is not a palindrome";
	}
	else
	cout<<"Given String is a palindrome";
	
}

