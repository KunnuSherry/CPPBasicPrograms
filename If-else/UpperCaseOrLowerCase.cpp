#include <iostream>
using namespace std;
int main(){
	char a;
	cout << "Write the character ";
	cin >> a;
	if(a<=57 && a>=48){
		cout << a << " is a number " << endl ;
	}
	if(a<=90 && a>=65){
		cout << a << " is a upper case character " << endl ;
	}
	if(a<=122 && a>=97){
		cout << a << " is a lower case character " << endl ;
	}

}
