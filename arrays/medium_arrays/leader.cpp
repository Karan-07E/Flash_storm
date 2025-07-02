#include <iostream>
#include <vector>

using namespace std;

void leader(int arr[], int n){
    vector<int> leaders;
    int flag = 0;
    for(int i=0; i<n; i++){
        int temp = arr[i];
        for(int j=i+1; j<n; j++){
            if(arr[j] < temp){
                flag = 1;
            }
            else{
                break;
            }
        }
        if(flag == 1){
            leaders.push_back(temp);
        }
        flag = 0;
    }
    leaders.push_back(arr[n-1]); // Last element is always a leader

    for(auto it : leaders){
        cout << it << " ";
    }
}


void optimal(int arr[], int n){
    int max = 0;
    vector<int> leaders;
    for(int i=n-2; i>=0; i--){
        if(arr[i] > max){
            max = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    leaders.push_back(arr[n-1]);
    for(auto it : leaders){
        cout << it << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << endl;
    leader(arr, n);
    cout << endl;
    optimal(arr, n);
    return 0;
}