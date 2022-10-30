#include <iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.get();
	char sent[100];
	char largest[100];
	int largest_len=0;
	while(n--){
		cin.getline(sent,100);
		
		int len=strlen(sent);
		if(len>largest_len){
			largest_len=len;
			strcpy(largest,sent);
		}
			}
			cout<<"  LARGEST IS:"<<largest<<endl;
}
