#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
string twsum(vector<int>nums, int target){
    unordered_map<int, int> mpp;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int comp = target - nums[i];
        if(mpp.find(comp) != mpp.end()){
            return "YES";
        }
        mpp[nums[i]] = i;
    }
    return "NO";
}

vector<int>twosum(vector<int> nums, int target){
    unordered_map<int, int> mp;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int comp = target - nums[i];
        if(mp.find(comp) != mp.end()){
            return {mp[comp], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}

int main(){
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = twosum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    string res = twsum(nums, target);
    cout << res << endl;
    return 0;
}