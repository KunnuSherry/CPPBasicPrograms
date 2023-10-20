#include <iostream>
using namespace std;
void min(int array[], int size){
	int min = INT_MAX;
	int i;
	for(i=1; i<=size; i++){
		if(array[i]<min){
			min = array[i];
		}
	}
	cout << "The minimum value is: " << min << endl;
}
void max(int array[], int size){
	int max = INT_MIN;
	int i;
	for(i=1; i<=size; i++){
		if(array[i]>max){
			max = array[i];
		}
	}
	cout << "The maximum value is: " << max << endl;
}
int main(){
	int size;
	cout << "Write the size of the array " ;
	cin >> size ;
	int arr[10000];
	int i;
	for(i=1; i<=size; i++){
		cin >> arr[i];
	}
	min(arr, size);
	max(arr, size);
	
}
