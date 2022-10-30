#include<iostream>
using namespace std;
int main(){
int StartRow,StartCol,EndRow,EndCol;
cout<<"Enter Start row: ";
cin>>StartRow;

cout<<"Enter Start col: ";
cin>>StartCol;

cout<<"Enter End row: ";
cin>>EndRow;

cout<<"Enter End col: ";
cin>>EndCol;

long sum=0;
int arr[][100]={{1,3,5,6}
				,{4,5,3,2}
				,{9,5,2,7}
				,{4,7,2,0}};

	for(int i=StartRow;i<EndRow;i++){
	

		for(int j=StartCol;j<4;j++){
		sum=sum+arr[i][j];

}
}
cout<<sum<<" ";
}
