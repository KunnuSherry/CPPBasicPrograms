#include <iostream>
using namespace std;
int main(){
	int a, b ;
	cout << "Enter the number: " << endl ;
	cin >> a ;
	cout << "Enter the exponent: " << endl ;
	cin >> b ;
	int i ;
	int pow = 1 ;
	for (i = 1; i<=b; i++){
		pow = pow * a ;
	}
	cout << "Answer is " << pow ; 
}
