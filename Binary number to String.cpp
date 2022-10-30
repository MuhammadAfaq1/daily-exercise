#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int main(){
	string s="001";
	int num=stoi(s);
    int n=0;
    int ans=0;
    for(int i=0;i<s.length();i++){
        n=num%2;
        n=n*pow(2,i);
        ans=ans+n;
        num=num/10;
    }
    cout<<ans;

}
