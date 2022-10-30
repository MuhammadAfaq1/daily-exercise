#include<iostream>
using namespace std;

int rotatedArraySearch(int arr[] , int l , int r,int key){

 if(l > r){
	return -1;
}

	int mid=(l+r)/2;
	if(arr[mid] == key ){
		return mid;
	}
	if(arr[l] <= arr[mid]){
		if(key >= arr[l] && key <= arr[mid]){
			return rotatedArraySearch(arr, l , mid-1 , key);
		}
		return rotatedArraySearch(arr , mid+1 , r , key);
		}
	
	if(key>= arr[mid]  &&  key<=arr[r]){
		return rotatedArraySearch(arr , mid+1 , r , key );
	}
	return rotatedArraySearch(arr , l , mid-1 , key);
}

int main(){
	int arr[]={6,7,8,3,4,5};
	cout<<rotatedArraySearch(arr , 0 , 5 , 8);
}
