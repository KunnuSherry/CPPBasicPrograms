#include <iostream>
using namespace std ;
int main(){
	int a = 5 ;
	int i ;
	for(i=1; i<=a; i++){
		for(int j = 1; j<=5-i+1; j++){
			cout << "*";
		}
		cout << endl ;
	}
}

// *****
// ****
// ***
// **
// *
