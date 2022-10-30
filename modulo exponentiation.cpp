#include<iostream>
#include<cmath>

int compute_exp(int num,int n,int mod){
	
	int ans=1;
	while( n>0 ){
		int last_bit=n&1;
		if(last_bit){
			ans*=num;
		}
		num*=num;
		n>>=1;
	}
	return (ans%mod);
}


using namespace std;

int main(){
	
	cout<<compute_exp(2,3,5);
}
