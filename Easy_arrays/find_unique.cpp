#include <iostream>
using namespace std;

int find_unique(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        res ^= arr[i];
    }
    return res;
}
int main(){
    int arr[] = {2,2,1};
    int arr1[] = {4,1,2,1,2};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr1)/sizeof(arr1[0]);
    cout << find_unique(arr, n1) << endl;
    cout << find_unique(arr1, n2);
    return 0;
}