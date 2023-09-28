#include <iostream>
using namespace std;
int main(){
	int a;
	int i=0;
	int sum =0;
	cout << "Write the number = ";
	cin >> a;
	while (i<a){
		sum = sum + (2*i) ;
		i = i+1 ;
	}
	cout << sum << " is the sum of " << a << " even numbers ";
}
