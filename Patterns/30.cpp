#include <iostream>
using namespace std ;
int main(){
	int i;
	for (i=1; i<=6; i++){
		int j;
		for (j=1; j<=7-i; j++){
			cout << i;
		}
		cout << "" << endl;
	}	
}

// 111111
// 22222
// 3333
// 444
// 55
// 6
