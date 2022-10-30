#include <iostream>
using namespace std;
int PrefixSumArray(int arr[],int n){
	int prefix[100]={0};
	
	prefix[0]=arr[0];
	for (int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	int larger=0;
	for(int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			int sum= i>0 ? prefix[j]-prefix[i-1] : prefix[j];
			larger=max(larger,sum);
		}
	}
	return larger;
}



int main(){
		int arr[]={-2,1,3};
	int n=sizeof(arr)/sizeof(int);	
	
	cout<<	PrefixSumArray(arr,n);
	}

