#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int total_marks(vector<int> marks){
	return marks[0]+marks[1]+marks[2];
}
bool compare(pair<string,vector<int> >  s1,pair<string,vector<int> >  s2){
	vector<int> marks1=s1.second;
	vector<int> marks2=s2.second;
	
	return total_marks(marks1)>total_marks(marks2); 
}

int main(){

vector<pair<string,vector<int> > > student_marks={
		{"Rohan",{10,20,11}},
		{"Prateek",{10,20,3}},
		{"Vivek",{4,5,6}},
		{"Rijul",{10,13,20}}};
		
		sort(student_marks.begin(),student_marks.end(),compare);
		for(auto s:student_marks){
			cout<<s.first<<","<<total_marks(s.second)<<endl;
		}

	
}
