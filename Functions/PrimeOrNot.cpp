#include <iostream>
using namespace std;
int primeOrNot(int a){
	int i;
	bool prime = false;
	for ( i=2; i<=a/2; i++){
		if(a%i==0){
			prime = true;
			break;
		}
	}
	if(prime = true){
		cout << a << " is a prime number.";
	}
	else{
		cout << a << " is a composite number.";
	}
}
int main(){
	int a;
	cout << "Type the number: " ;
	cin >> a ;
	primeOrNot(a);
}
