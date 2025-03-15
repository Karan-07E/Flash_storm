#include <iostream>
#include <vector>
using namespace std;

int partition(int l, int h, vector<int> & a){
    int pivot = a[h];
    int i = l - 1;
    for(int j=l; j<h; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[h]);
    return i+1;
}
void quick(int low, int high, vector<int> & a){
    if(low < high){
    int PivotIndex = partition(low, high, a);
    quick(0, PivotIndex-1, a);
    quick(PivotIndex+1, high, a);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    cout << "enter the elements" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quick(0, n-1, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}