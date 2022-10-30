
#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<string,int> p1,pair<string,int> p2){
	
	int x=p1.second;
	int y=p2.second;

	return x<y;
	
	
	}



int main() {
vector<pair<string,int>> fruits={ {"Mango",100},
 							{"Guava",70},
							{"Grapes",40},
							 {"Apple",60},
							  {"Banana",30} };
string s="name";
if(s=="name"){
sort(fruits.begin(),fruits.end());
for(auto x:fruits){
	cout<<x.first<<","<<x.second<<"  ";}
}

	cout<<endl;

s="price";
if(s=="price"){
sort(fruits.begin(),fruits.end(),compare);
for(auto x:fruits){
	cout<<x.first<<","<<x.second<<"  ";
}

}
	return 0;
}


