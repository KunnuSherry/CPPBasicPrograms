#include <iostream>
using namespace std ;
int main(){
	int c;
	cout << "Write How Many Numbers in fibonacci series you want" ;
	cin >> c ;
	int a = 0 ;
	int b = 1 ;
	int d ;
	int i = 1;
	while (i<=c){
		cout << a << " " ;
		d = a+b ;
		a = b ;
		b = d ;
		i = i+1 ;
	}
	
}
