#include <iostream>
using namespace std ;
int main(){
	int n = 5;
	int i ;
	for(i=1 ; i<=n ; i++){
		int j ;
		for(j = 1; j<=i-1; j++){
			cout << " " ;
		}
		for(j = 1; j<=2*(n-i+1)-1; j++){
			cout << "*";
		}		
		cout << "" << endl ;
	}
	return 0;
} 
