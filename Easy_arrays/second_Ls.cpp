#include <iostream>
using namespace std;

void ls(int arr[], int n, int large, int small){
    int secondLarge = INT_MIN, secondSmall = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            secondLarge = large;
            large = arr[i];
        } else if (arr[i] > secondLarge && arr[i] != large) {
            secondLarge = arr[i];
        }
        if (arr[i] < small) {
            secondSmall = small;
            small = arr[i];
        } else if (arr[i] < secondSmall && arr[i] != small) {
            secondSmall = arr[i];
        }
    }
    cout << secondLarge << " " << secondSmall;
}
int main(){
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(n == 0 || n == 1){
        return -1;
    }
    ls(arr, n, INT_MIN, INT_MAX);
    return 0;
}