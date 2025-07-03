#include <iostream>
#include <vector>

using namespace std;

void sorts(vector<int> &arr){
    int n = arr.size();
    int left = 0, high = n-1, mid = 0;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[left], arr[mid]);
            mid++;
            left++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
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