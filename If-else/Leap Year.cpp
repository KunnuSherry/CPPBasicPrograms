#include <iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter the year: " ;
	cin >> a ;
	if (a%4==0){
		cout << "It is a Leap year" ;
	} 
	else{
		cout << "It is not a leap yaer" ;
	}
}
