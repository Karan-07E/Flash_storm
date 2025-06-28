#include <iostream>
#include <vector>

using namespace std;

void sorts(vector<int> &arr){
    int n = arr.size();
    int left = 0, right = n - 1, pivot = 0;
    while(pivot <= right){
        if( arr[pivot] == 0){       //if 0 both pivot and left swap and both increment
            swap(arr[pivot], arr[left]);
            left++;
            pivot++;
        }
        else if(arr[pivot] == 1){
            pivot++;                    //if 1 only pivot is incremented
        }
        else {
            swap(arr[pivot], arr[right]);
            right--;           //if 2 both pivot and right swap and right is decremented
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sorts(arr);
    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}