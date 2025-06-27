#include <iostream>
using namespace std;

//brute force is create a dummy array and push the elements thats it :)

int main(){
    int arr[] = {1,3,4,5,2,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;  //generalizing for k positions.
    cin >> k;
    k = k % n;
    while(k--){
        int temp = arr[0];  //store the first element
        for(int i=0; i<n-1; i++){
            arr[i] = arr[i+1];  //left shift them manually
        }
        arr[n-1] = temp;    //append the first element to last
    }   //repeat until k
    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";  //print the result
    }
    return 0;
}