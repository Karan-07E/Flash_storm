#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int duplicate(int arr[], int n){    //brute-force
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    vector<int>ress;
    for(auto &pair : freq){
        ress.push_back(pair.first);
    }
    int k = ress.size();
    return k;
}

int duplicates(int arr[], int n){  //optiaml
    int i = 0;
    for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
        i++;
        arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main(){
    int arr1[] = {1,1,2,2,2,2,3,3};
    int arr2[] = {3,4,5,1,1,2,2,3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int res1 = duplicate(arr1, n);
    cout << res1 << endl;
    int res2 = duplicates(arr2, n);
    cout << res2;
    return 0;
}