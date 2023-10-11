#include <iostream>
using namespace std ;
int main(){
	int n = 5;
	int i ;
	int k ;
	for(i=1 ; i<=n ; i++){
		int j ;
		for( j=1; j<=5-i; j++){
			cout << " " ;
		}
		for ( j=1; j<=9; j++){
			if ( j==1 || j == 2*i-1 || i==5){
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "" << endl ;	
	}
	return 0;
} 

//     *
//    * *
//   *   *
//  *     *
// *********
