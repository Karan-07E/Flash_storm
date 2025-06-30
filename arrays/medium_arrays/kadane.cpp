#include <iostream>
#include <vector>

using namespace std;

int kadane(vector<int> &arr, int n){
    int sum = 0, maxi = INT_MIN, start, end, ans_start;
    for(int i=0; i<n; i++){
        if(sum == 0){
            start = i;
        }
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ans_start = start;
            end = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << endl;
    for(int i=ans_start; i<=end; i++){
        cout << arr[i] << " ";
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = kadane(arr, n);
    cout << endl << res;
    return 0;
}