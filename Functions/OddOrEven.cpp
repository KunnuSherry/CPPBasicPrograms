#include <iostream>
using namespace std;
int oddOrEven(int a){
	if(a%2==0){
		cout << a << " is an even number: " ;
	}
	else{
		cout << a << " is a odd number: " ;
	}
}
int main(){
	int a;
	cout << "Type the number: " ;
	cin >> a ;
	oddOrEven(a);
}
