#include <iostream>
using namespace std;

int linear_Search(int arr[],int n,int key){
	for (int i =0;i<n;i++){
		if (arr[i]== key){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int arr[]={1,3,8,6,7,8,9,6,5,5};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cout<<"ENTER KEY TO SEARCH:";
	cin>>key;
	
	int index=linear_Search(arr,n,key);
	if (index!=-1){
		cout<<key<<" is present at index "<<index<<endl;
		
	}
	else
	cout<<key<<" not found!"<<endl;
	
	
}

//time complexity (worst case)  O(N)
// 	for (int i =0;i<n;i++) --> no of operations proportional to n
// O(N) time complexity

