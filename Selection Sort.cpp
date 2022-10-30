#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n){

for(int i=0;i<n-1;i++){
	for (int j=i+1;j<n;j++){
		if (arr[j]<arr[i]){
			swap(arr[i],arr[j]);
		}
	}
}	
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}
}

int main(){
int arr[]={5,4,3,2,1};
int n=sizeof(arr)/sizeof(int);
InsertionSort(arr,n);

}
