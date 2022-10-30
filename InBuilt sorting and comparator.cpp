#include <iostream>
#include<vector>
#include<algorithm> 

bool comparater(int a,int b){
	return a>b;
}

int Sorting(vector<int> arr,bool flag){
	if (flag)
	sort(arr.begin(),arr.end());
	else
	sort(arr.begin(),arr.end(),compare);
	return arr;
}
using namespace std;
 
int main()
{
    // Get the array
   vector<int> arr = { 1, 45, 54, 71, 76, 12 };
 
 	sorting(arr,1);
  
    cout << "\nDescending Sorted Array:\n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
