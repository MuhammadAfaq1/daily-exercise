#include<iostream>
#include<set>
using namespace std;

int main(){
	string s="geeksforgeeks";
	set<char> ss(s.begin(),s.end());
	string str;
	
	for(auto x:ss)
	str.push_back(x);
	
	
cout<<str;
}
