#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int,int> > arr(n);

for(int i=0;i<arr.size();i++){
		cin>>arr[i].first;
		cout<<",";
		cin>>arr[i].second;
		cout<<endl;
	}
	sort(arr.begin(),arr.end());

	for(int i=0;i<arr.size();i++){
		cout<<arr[i].first<<","<<arr[i].second<<endl;
	}
}
