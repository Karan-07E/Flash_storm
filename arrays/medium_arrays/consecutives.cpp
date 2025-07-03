#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solve(vector<int> &nums){           //optimal at first glance
    set<int> freq(nums.begin(), nums.end());
    int count = 1, maxCount = 1;
    for(int num : nums){
        if(freq.find(num-1) == freq.end()){
            count = 1;
            while(freq.find(num + count) != freq.end()){
                count++;
            }
            maxCount = max(maxCount, count);
        }       
    }
    return maxCount;
}
int main(){
    int n;
    cin >> n;
    if(n == 0) return 0;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];
    int res = solve(nums);
    cout << res << endl;
    return 0;
}