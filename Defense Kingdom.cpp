#include<iostream>
#include <vector>
#include <algorithm>
int main(){
	vector<pair<int,int>> v(3)=((3,8),(8,6),(11,2));
	int w,h;
	vector<int>x,y;
	x.push_back(0);
	y.push_back(0);
	int maxx=0;
	int maxy=0;
	for(int i=0;i<v.size();i++){
		x.push_back(v[i].first()),y.push_back(v[i].second());
	cout<<x[i]<<" "<<y[i];
	}
	sort(all(x));
	sort(all(y));
	for(int i=0;i<x.size();i++){
		maxx=max(maxx,x[i]-x[i-1]-1);
	}
	for(int i=0;i<y.size();i++){
		maxx=max(maxx,y[i]-y[i-1]-1);
	}
	maxx=max(maxx,w-x[x.size() - 1 ]);
	maxx=max(maxx,w-y[y.size() - 1 ]);
	
	return (maxx*maxy);
}
