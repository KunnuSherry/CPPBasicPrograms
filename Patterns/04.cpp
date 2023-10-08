#include <iostream>
using namespace std ;
int main(){
	int n = 3 ;	
	int i = 1 ;
	int k = 0 ;
	while(i<=n){
		int j = 1 ;
		while (j<=n){
			cout << 9-k << " ";
			j = j+1;
			k = k+1;
		}
		cout << endl ;
		i = i+1 ;
	}
}

// 9 8 7
// 6 5 4
// 3 2 1
