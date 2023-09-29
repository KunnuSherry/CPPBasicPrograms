#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a, b, c ;
	cout << "Write the 1st side of the rectangle: ";
	cin >> a;
	cout << "Write the 2nd side of the rectangle: ";
	cin >> b;
	cout << "Write the 3rd side of the rectangle: ";
	cin >> c;
	int s = (a+b+c)/3 ;
	int x = s-a ;
	int y = s-b ;
	int z = s-c ;
	int w = s*x*y*z ;
	cout << "Area of the rectangle is: " << sqrt(w)  << endl ;
}
