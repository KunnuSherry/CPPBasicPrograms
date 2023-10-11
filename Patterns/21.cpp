#include <iostream>
using namespace std ;
int main(){
	int n = 5;
	int i ;
	int k ;
	for(i=1 ; i<=n ; i++){
		int j ;
		for( j=1; j<=i-1; j++){
			cout << " " ;
		}
		for ( j=1; j<=5-i+1; j++){
			cout << "* " ;
		}
		cout << "" << endl ;
		
	}
	for (k=1; k<=n; k++){
		int j;
		for ( j=1; j<=5-k; j++){
			cout << " ";
		}
		for ( j=1; j<=k; j++){
			cout << "* ";
		}
		cout << "" << endl ;
	}

	return 0;
} 

// * * * * *
//  * * * *
//   * * *
//    * *
//     *
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
