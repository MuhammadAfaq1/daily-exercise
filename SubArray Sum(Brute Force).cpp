#include <iostream>
using namespace std;
int largerSum(int arr[],int n){
		int larger=0;
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			int sum=0;
		
			for (int k=i;k<=j;k++){
				sum=sum+arr[k];
			}
			larger=max(larger,sum);
		}
	}
	return larger;
}



int main(){
		int arr[]={-2,1,3};
	int n=sizeof(arr)/sizeof(int);	
	
	cout<<	largerSum(arr,n);
	}
	//complexity O(N^3) brute force
