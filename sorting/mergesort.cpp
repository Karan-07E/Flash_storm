#include <iostream>
#include <vector>
using namespace std;

void merge(int low, int mid, int high, vector<int> &a){
    int i = low, h = low;
    int j = mid + 1;
    vector<int> b((high - low) + 1);
    while((h<=mid) && (j<=high)){
        if(a[h] < a[j]){
            b[i++] = a[h++];
        }
        else{
            b[i++] = a[j++];
        }
    }
    while(h<=mid){
        b[i++] = a[h++];
    }
    while(j<=high){
        b[i++] = a[j++];
    }

    for(int k=low; k<=high; k++){
        a[k] = b[k];
    }
}
void mergesort(int low, int high, vector<int> &a){
    if(low < high){
        int mid = low + (high - low) / 2;
        mergesort(low, mid, a);
        mergesort(mid+1, high, a);
        merge(low, mid, high, a);
    }
}
int main(){
    int n;
    cin >> n;
    cout << "enter the elements" << endl;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    mergesort(0, n-1, a);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    } 
    return 0;
}