#include <iostream>
using namespace std;

int recursive(int arr[], int n, int max1){
    if(n == 0){
        return max1;
    }
    if(arr[n-1] > max1){
        max1 = arr[n-1];
    }
    return recursive(arr, n-1, max1);
}
int main(){
    int arr[5] = {2,2,6,7,1};
    int max = INT_MIN, max1 = INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
    max1 = recursive(arr, 5, INT_MIN);
    cout << endl;
    cout << max1;
    return 0;
}