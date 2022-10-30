#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n){
for (int i=1;i<n;i++){
	int current =arr[i];
	int j=i-1;
	while(arr[j]>current and j>=0){
	
	arr[j+1]=arr[j];
	j--;
}
arr[j+1]=current;
}
	
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}
}

int main(){
int arr[]={5,4,93,2,1};
int n=sizeof(arr)/sizeof(int);
InsertionSort(arr,n);

}
