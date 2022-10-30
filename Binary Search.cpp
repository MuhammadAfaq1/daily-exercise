#include <iostream>
using namespace std;

int binary_Search(int arr[],int n,int key){
int start=0;
int end=n-1;

while(start<=end){
	int mid=(start+end)/2;	

	if(arr[mid]==key)
	return mid;

	else if (arr[mid]>key)
	end=mid-1;
	
	else if(arr[mid]<key)
	start=mid+1;
}

return -1;	
}

int main(){
	//binary search works on sorted arrays which is said to be monotonic i.e inc or decr
	// if array is not sorted then it has to be sorted
	int arr[]={10,20,30,40,50,60,70,80,90,99};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cout<<"ENTER KEY TO SEARCH:";
	cin>>key;
	
	int index=binary_Search(arr,n,key);
	if (index!=-1){
		cout<<key<<" is present at index "<<index<<endl;
		
	}
	else
	cout<<key<<" not found!"<<endl;
	
	
}

//time complexity(worst case) -> O(log2 N) 
// 1st iteration N=N/2^0;
// 2nd iteration N/2=N/2^1;
//...
//1=N/2^k
//N/2^k=1 -->N=2*k
//=>k=log2 N
//O(log2 N)



