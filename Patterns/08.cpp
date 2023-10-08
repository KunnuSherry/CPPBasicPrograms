#include <iostream>
using namespace std ;
int main(){
	int n = 4 ;	
	int i = 1 ;
	int k = 1 ;
	while(i<=n){
		int j = 1 ;
		k = i ;
		while (j<=i){
			cout << k << " " ;
			j = j+1 ;
			k = k+1 ;
		}
		cout << endl ;
		i = i+1 ;
	}
}

// 1
// 2 3
// 3 4 5
// 4 5 6 7
