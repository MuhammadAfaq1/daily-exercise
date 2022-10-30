#include <iostream>
using namespace std;

pair<int,int> StairCaseSearch(int arr[][100],int n,int m ,int key){
	int i=0;
	int j=m-1;
	
	
	while(j>=0 and i<=n-1){
		if(arr[i][j]==key){
			return {i,j};
		}
		
		else if(arr[i][j]>key)
		j--;
		
		else
		i++;
	}
}
int main(){

int arr[][4]={{22,43,53,64},
	{34,66,54,68},
	{36,40,45,48},
	{39,41,94,101}};

pair<int,int> cordinates=StairCaseSearch(arr,4,4,101);
cout<<cordinates.first<<","<<cordinates.second;

}
