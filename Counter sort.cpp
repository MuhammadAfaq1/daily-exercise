#include <iostream>
using namespace std;
 
 void CounterSort(int arr[],int n){
         	
	int k=arr[0];
 
 	for (int i=0;i<n;i++){
 		k=max(k,arr[i]);
	 }
	 
	  int count[100000]={0};
	 
	 for (int i=0;i<n;i++){
	 	count[arr[i]]++;
	 }
	 
        for (int i=1;i<=k;i++){
	 count[i]+=count[i-1];

	 }
	 
	int output[n];
	for(int i=n-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=output[i];
	}
	 cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	
 }
int main()
{
    int arr[] = {1,3,2,3,4,1,6,4,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
        cout<<endl;
        
      CounterSort(arr,n);
       
    return 0;
}
