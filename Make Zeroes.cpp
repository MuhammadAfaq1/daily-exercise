#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int>> arr={ {5, 4, 3, 9},
					 {2, 0, 7, 6},
					 {1, 3, 4, 0},
					 {9, 8, 3, 4} };
	int n=arr.size();
	int m=arr[0].size();
	
	vector<int> r,c;
	
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==0){
			r.push_back(i);
			c.push_back(j);
		}
		}
	}
	
	for(auto x: r){
		for (int j=0;j<n;j++){
			arr[x][j]=0;
		}
	}
	for(auto x:c){
		for(int i=0;i<n;i++ ){
			arr[i][x]=0;
		}
	}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<arr[i][j]<<" ";
	}cout<<endl;
}
}
