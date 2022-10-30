#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n){
int counter=1;
	while(counter<n){
	for (int i=0;i<n-counter;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
counter++;
}	
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}
}

int main(){
int arr[]={5,4,3,2,1};
int n=sizeof(arr)/sizeof(int);
BubbleSort(arr,n);

}
