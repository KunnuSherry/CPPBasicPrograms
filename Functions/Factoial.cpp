// Online C++ compiler to run C++ program online


#include <iostream>
using namespace std ;
int factorial(int a){
	int fac = 1;
	for (int i=1; i<=a; i++){
		fac = fac * i ;
	}
	cout << "The factorial of " << a << " is " << factorial(a);
	return 0 ;
}
int main(){
	int a;
	cout << "Write the Number: " ;
	cin << a ;
	factorial(a);
}
