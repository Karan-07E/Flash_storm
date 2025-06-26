#include <iostream>
#include <vector>
#include <map>

using namespace std;
int longestsubsum(vector<int> arr, int k){
    int left = 0, right = 0;
    int len = 0;
    int sum = arr[0];
    int n = arr.size();
    while(right < n){
        while(sum > k && left <= right){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            len = max(len, right - left + 1);
        }
        right++;
        if(right < n){
            sum += arr[right];
        }
    }
    return len;
}
// int longestsubsum(vector<int> arr, int n, int k){
//     map<long long, int> prefixmap;
//     int maxlen = 0;
//     long long sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//         if(sum == k){
//             maxlen = max(maxlen, i+1);
//         }
//         long long remains = sum - k;
//         if(prefixmap.find(remains) != prefixmap.end()){
//             maxlen = max(maxlen, i - prefixmap[remains]);
//         }
//         if(prefixmap.find(sum) == prefixmap.end()){         //only change here.
//             prefixmap[sum] = i;
//         }
//     }
//     return maxlen;
// }
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << endl;
    int result = longestsubsum(arr, k);
    cout << result << endl;
    return 0;
}