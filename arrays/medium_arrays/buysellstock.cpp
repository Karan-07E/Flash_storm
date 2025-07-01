#include <iostream>

using namespace std;

void buysell(int arr[], int n){
    int profit = 0, max_profit = 0;
    int min_val = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < min_val){
            min_val = arr[i];
        }
        profit = arr[i] - min_val;
        max_profit = max(max_profit, profit);
    }
    cout << endl << max_profit;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    buysell(arr, n);
    return 0;
}