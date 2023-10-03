#include <iostream>
using namespace std ;
int main(){
	int a ;
	cout << "Write the number You want the factor of : " ;
	cin >> a ;
	int i = 1 ;
	while (i<=a){
		if (a%i==0){
			cout << i <<" is the factor of " << a << endl ;
		}
		i = i+1 ;
	}
	
}
