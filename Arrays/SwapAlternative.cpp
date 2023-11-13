#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size){
    int i;
    for(i=0; i<size; i+=2){
        if(i+1<size){                                                
            swap(arr[i],arr[i+1]);
        }
    }
    for(i=0; i<size; i++){
        cout << arr[i]<< " ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    swapAlternate(arr, 6);

    return 0;
}
