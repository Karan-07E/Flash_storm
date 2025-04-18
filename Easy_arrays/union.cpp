#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;


void unionfind(int arr[], int n, int ar[], int m){
    unordered_set<int> nums;    //ensures unique elements are added.
    for(int i=0; i<n; i++){
        nums.insert(arr[i]);
    }
    for(int i=0; i<m; i++){
        nums.insert(ar[i]);
    }
    cout << "union" << endl;
    vector<int> res(nums.begin(), nums.end());
    int t = res.size();
    for(int i=n-1; i>=0; i--){
        cout << res[i] << " ";
    }
}
int main(){
    int n, m;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> m;
    int ar[m];
    for(int i=0; i<m; i++){
        cin >> ar[i];
    }
    unionfind(arr, n, ar, m);
    return 0;
}