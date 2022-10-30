#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[]={1,2,3,4,1,2,3};
	
	int res=0;
	for(int i=0;i<7;i++){
		res^=arr[i];
		cout<<res<<endl;
	} 
	cout<<res;
}
