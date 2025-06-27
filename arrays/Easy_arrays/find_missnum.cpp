#include <iostream>
#include <vector>
using namespace std;

int findmiss(vector<int> &arr, int n){
    int sum2n = 0; 
    int first_n_sum = ((n)*(n+1))/2;
    for(int i=0; i<n; i++){
        sum2n += arr[i];
    }
    return first_n_sum - sum2n;
}
int optimal(vector<int> &arr, int n){
    int xor1=0, xor2=0;
    for(int i=0; i<n; i++){
        xor1 ^= arr[i];
        xor2 ^= (i+1);
    }
    return (xor1 ^ xor2);
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    int m = arr.size();
    int res = findmiss(arr, m);
    int optres = optimal(arr, m);
    cout << endl;
    cout << res << " " << optres;
    return 0;
}