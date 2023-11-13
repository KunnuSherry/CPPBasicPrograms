#include <iostream>
using namespace std;
void findUnique(int arr[], int size){
    int i;
    int ans = 0;
    for(i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    cout << ans ;
}

int main() {
    int arr[] = {1,2,1,3,3,5,5};
    findUnique(arr, 7);

    return 0;
}
