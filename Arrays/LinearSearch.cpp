#include <iostream>
using namespace std;
bool present(int arr[], int size, int key){
	int i;
	for (i=1; i<=size; i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};	
	int key;
	cout << "Enter the key ";
	cin >> key;
	bool found ;
	found = present(arr, 10, key);
	if(found){
		cout << key << " is present in the array.";
	}
	else{
		cout << key << " is not present in the array.";
	}
}
