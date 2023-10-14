#include <iostream>
using namespace std ;
int main(){
	int i;
	for(i=1; i<=5; i++){
		int j;
		for(j=1; j<=i; j++){
			if ((i+j)%2==0){
				cout << "1";
			}
			else{
				cout << "0";
			}
		}
		cout << "" << endl ;
	}	
}

// 1
// 01
// 101
// 0101
// 10101
