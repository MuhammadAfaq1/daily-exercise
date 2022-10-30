#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int d=2;
	int arr[]={1,3,3,9,4};
	int count=0;
for(int i=0;i<5;i++){

		if (arr[i+1]-arr[i]<=d)
		count++;
		i++;
	}

cout<<count;
}
