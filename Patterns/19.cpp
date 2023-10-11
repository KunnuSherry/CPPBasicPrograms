#include <iostream>
using namespace std ;
int main(){
	int n = 5;
	int i ;
	for(i=1 ; i<=n ; i++){
		int j ;
		for( j=1; j<=5-i; j++){
			cout << " " ;
		}
		for ( j=1; j<=i; j++){
			cout << "* " ;
		}
		cout << "" << endl ;
		
	}
	return 0;
} 
