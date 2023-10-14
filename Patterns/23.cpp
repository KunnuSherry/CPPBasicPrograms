#include <iostream>
using namespace std ;
int main(){
	int i ;
	int m ;
	for (i=1; i<=4; i++){
		int j;
		for (j=1; j<=4-i; j++){
			cout << " " ;
		}
		int k = i ;
		for (j=1; j<=i; j++){
		
			cout << k;
			k = k-1 ;
		}
		for (j=2; j<=i; j++){
			cout << j;
		}
		cout << "" << endl;
	}
	for (m=1; m<=3; m++){
		int j;
		for (j=1; j<=m; j++){
			cout << " ";
		}
		int n = 4-m ;
		for (j=1; j<=4-m; j++){
			cout << n ;
			n = n-1;
		}
		for (j=2; j<=4-m; j++){
			cout << j ;
		}
		cout << "" << endl;
	}
}

//    1
//   212
//  32123
// 4321234
//  32123
//   212
//    1
