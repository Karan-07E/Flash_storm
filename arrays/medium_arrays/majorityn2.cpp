#include <iostream>
#include <vector>

using namespace std;

int findmajority(vector<int> &arr, int n){
    int count = 0, count2 = 0, ele;
    for(int i=0; i<n; i++){         //Moore's Voting Algorithm
        if(count == 0){
            count = 1;
            ele = arr[i];
        }
        else if(ele == arr[i]) count++;
        else count--;
    }
    return ele; // This will return the majority element if it exists
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = findmajority(arr, n);
    cout << endl << res;
    return 0;
}