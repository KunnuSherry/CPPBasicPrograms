#include <iostream>
using namespace std ;
int main(){
	int i;
	int m;
	for (i=1; i<=5; i++){
		int j;
		for(j=1; j<=6-i; j++){
			cout << "*";
		}
		for(j=1; j<=2*(i-1); j++){
			cout << " ";
		}
		for(j=1; j<=6-i; j++){
			cout << "*";
		}
		cout << "" << endl ;
	}
	for (m=1; m<=5; m++){
		int j;
		for(j=1; j<=m; j++){
			cout << "*";
		}
		for(j=1; j<=2*(5-m); j++){
			cout << " ";
		}
		for(j=1; j<=m; j++){
			cout << "*";
		}
		cout << "" << endl ;
	}
}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
