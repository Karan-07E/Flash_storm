#include <iostream>
using namespace std;

void insertion(int arr[], int k, int n){
    if(k == 1){
        return;
    }
    int j=n-k;
    while(j > 0 && arr[j-1] > arr[j]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertion(arr, k-1, n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k=n;
    insertion(arr, k, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}