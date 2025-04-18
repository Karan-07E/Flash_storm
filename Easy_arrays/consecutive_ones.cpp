#include <iostream>
#include <vector>

using namespace std;

int checkcons(vector<int> &nums, int n){
    int count = 0;
    int precount = 0;
    for(int i=0; i<n; i++){         //1 1 0 1 1 1
        if(nums[i] == 1){
            count++;
        }
        else{
            precount = count;
            count = 0;
        }
    }
    return max(count, precount);
}
int main(){
    int n;
    cin >> n;
    vector<int>ones(n);    //input only 0's and 1's
    for(int i=0; i<n; i++){
        cin >> ones[i];
    }
    n = ones.size();
    int res = checkcons(ones, n);
    cout << endl;
    cout << res;
    return 0;
}