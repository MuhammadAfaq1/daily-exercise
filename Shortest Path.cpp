#include <iostream>
using namespace std;
int main(){
	char c[100];
	cin.getline(c,100);
	int x=0;
	int y=0;
	for (int i=0;c[i]!='\0';i++){
		switch(c[i]){
			case 'N':
				y++;
				break;
			case 'S':
				y--;
				break;
			case 'E':
				x++;
				break;
			case 'W':
				x--;
				break;
			default:
				cout<<"ERROR!";
		}
	}
	
	cout<<"Final x: "<<x<<"and y: "<<y<<endl;
}
