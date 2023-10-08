#include <iostream>
using namespace std ;
int main(){
	int a = 5 ;
	int i ;
	int k ;
	for(k=1; k<=a; k++){
		for(int j =1; j<=k; j++){
			cout << "*";
		}
		cout << endl ; 
	}
	for(i=1; i<=a; i++){
		for(int j = 1; j<=5-i+1; j++){
			cout << "*";
		}
		cout << endl ;
	}
}

*
**
***
****
*****
*****
****
***
**
*
