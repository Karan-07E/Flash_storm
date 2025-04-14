#include <iostream>
using namespace std;

bool checksort(int arr[], int n){ //brute force
    for(int i=0; i<n; i++){
        int comp = arr[i];
        for(int j=i+1; j<n; j++){
            if(comp > arr[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,6,7,8};
    int n = sizeof(arr1)/sizeof(arr1[0]); //we use only n bcz here we have the same array.
    bool ans1 = checksort(arr1, n);
    if(ans1) cout << "true";
    else cout << "false";
    cout << endl;
    bool ans2 = checksort(arr2, n);
    if(ans2) cout << "true";
    else cout << "false";
    return 0;
}