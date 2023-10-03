#include <iostream>
using namespace std ;
int main(){
	int a ;
    cin >> a ;
    int fac = 1 ;
    if (a<0){
    	cout << "Error" ;
     }
     else if (a==0){
     	cout << 1 ;
     }
     else if (a > 0){
     	int i  = 0 ;
     	while (i<=a){
	     	fac = fac * i;
	     	i = i + 1 ;
	     }
	     cout << fac ;
     }
}
