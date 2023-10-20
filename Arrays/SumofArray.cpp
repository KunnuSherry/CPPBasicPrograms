#include <iostream>
using namespace std;
int main(){
	int size;
	cout << "Write the size of the array " ;
	cin >> size ;
	int arr[10000];
	int i;
	int sum=0 ;
	for(i=1; i<=size; i++){
		cin >> arr[i];
		sum = sum+arr[i];
	}
	cout << "The sum of all elements is: " << sum << endl;
	
}
