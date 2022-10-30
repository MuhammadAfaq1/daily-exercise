#include<iostream>
using namespace std;
int main(){
	int n,coeff;
	cout<<"Enter number: ";
	cin>>n;
	
	for(int i=1 ; i<=n ; i++){
		 

		coeff=1;
	
		for(int j=1;j<=i;j++){
			
			cout<<coeff<< " ";
			coeff=coeff*(i-j)/j;
		}
			cout<<endl;

	}
}
