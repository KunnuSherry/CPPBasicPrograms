#include <iostream>
using namespace std ;
int main(){
	int i;
	int k =1;
	for(i=1; i<=5; i++){
		int j;
		for(j=1; j<=i; j++){
			cout << k << " ";
			k=k+1;
		}
		cout << "" << endl ;
	}	
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
