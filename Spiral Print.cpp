#include<iostream>
using namespace std;
void spiral_print(int arr[][10],int n,int m){

	int StartRow=0;
	int EndRow=n-1;
	int StartCol=0;
	int EndCol=m-1;
	
	while(StartRow<=EndRow and StartCol<=EndCol){
		
		for(int col=StartCol ; col<=EndCol ; col++){
			cout<<arr[StartRow][col]<<" ";
		}
		
		for(int row=StartRow+1 ; row<=EndRow ; row++){
			cout<<arr[row][EndCol]<<" ";
		}
		
		for(int col=EndCol-1 ; col>=StartCol ; col--){
			if (StartRow==EndRow){
			break;}
			cout<<arr[EndRow][col]<<" ";
		}	
			
		for(int row=EndRow-1 ; row>=StartRow+1 ; row--){
			if(StartCol==EndCol){
			break;}
			cout<<arr[row][StartCol]<<" ";
		}
	StartCol++;
	EndCol--;
	StartRow++;
	EndRow--;
	
	}
	
	
}
int main(){
	 int arr[][10]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

		spiral_print(arr,4,4);
}
