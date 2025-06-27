#include <iostream>
#include <vector>
using namespace std;

void bruteforce(int arr[], int n){
    vector<int> res;
    int zero_count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            continue;
            zero_count++;
        }
        else{
            res.push_back(arr[i]);
        }
    }
    for(int i=0; i<zero_count; i++){
        res.push_back(0);
    }
    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }
}
void optimal(int arr1[], int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr1[i] == 0){
            j=i;
            break;
        }
    }
    if(j == -1) return;
    for(int i=j+1; i<n; i++){
        if(arr1[i]!=0){
            swap(arr1[i], arr1[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
}
int main(){
    int arr[] = {1,0,2,3,0,4,0,1};
    int arr1[] = {1,2,0,1,0,4,0};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr1)/sizeof(arr1[0]);
    cout << endl;
    bruteforce(arr, n1);
    cout << endl;
    optimal(arr1, n2);
    return 0;
}