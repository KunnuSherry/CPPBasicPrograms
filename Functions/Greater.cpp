#include <iostream>
using namespace std;
int smaller(int a, int b, int c){
	if(a>b & a>c){
		cout << a << " is the greatest number" ;
	}
	if(b>a & b>c){
		cout << b << " is the greatest number" ;
	}
	if(c>a & c>b){
		cout << c << " is the greatest number" ;
	}
	return 0 ;
}
int main(){
	int a, b, c;
	cout << "Type the three numbers: " ;
	cin >> a >> b >> c ;
	smaller(a, b, c);
}
