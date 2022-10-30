#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	char n[100];
	int len=0;
//	cin.get(n,100);
//	cout<<n<<endl;
	char temp=cin.get();
	
while(temp!='\n'){
n[len++]=temp;
//	cout<<temp;
	temp=cin.get();
}
cout<<n;
}

