#include <iostream>
using namespace std;
int main(){
	
	int arr[][10]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	int wave=1;
	int start;
	int j=3;
	
while (j>=0)  {
	for(int row=0 ; row<4 ; row++){
	cout<<arr[row][j]<<" ";
		
}
	j--;
	
		for(int i=4-1 ; i>=0 ;i--){
			cout<<arr[i][j]<< " ";
		}
	

	j--;
}
	}
	
