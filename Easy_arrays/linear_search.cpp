#include <iostream>
using namespace std;

void linear(int arr[], int key, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << i << endl;
            return;
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int num = 3;
    int arr1[] = {5,4,3,2,1};
    int num1 = 5;
    int n = sizeof(arr)/sizeof(arr[0]); //since same array
    linear(arr, num, n);
    linear(arr1, num1, n);
    return 0;
}