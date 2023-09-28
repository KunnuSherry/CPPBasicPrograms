#include <iostream>
using namespace std;
int main(){
	int a,b,c ;
	cout << "Write Two Numbers to be operated ";
	cin >> a >> b;
	cout << "Press 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division";
	cin >> c;
	if(c==1){
		cout << a+b << " is the answer" << endl ;
	}
	else if (c==2) {
		cout << a-b << " is the answer" << endl ;
	}
	else if (c==3) {
		cout << a*b << " is the answer" << endl ;
	}
	else if (c==4) {
		cout << a/b << " is the answer" << endl ;
	}
}
