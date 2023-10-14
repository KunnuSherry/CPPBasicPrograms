#include <iostream>
using namespace std ;
int main(){
	int i;
	char k = 69 ;
	for(i=1; i<=5; i++){
		int j;
		for(j=1 ; j<=i; j++){
			char m = k ;
			cout << m ;
			m = char (m+1);
		}
		cout << "" << endl;
		k = k-1;		
	}	
}


// E
// DD
// CCC
// BBBB
// AAAAA
