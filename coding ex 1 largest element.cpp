#include <iostream>
#include <vectors>
using namespace std;
int largest_entry(vector<int> arr){
int current=0;
int max=0;
for (int i=0;i<arr.size();i++){
	if (max<arr[i]){
		max=arr[i];
	}
}
return max;	
}

int main(){
vector<int> arr={-1,2,6,3,-4};

cout<<largest_entry(arr);	
}
