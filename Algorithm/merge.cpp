#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib> // for random values

using namespace std;

void merge(int low, int mid, int high, vector <int> &a){
    int i=low, j=mid + 1, h=low;
    vector<int> b(high - low + 1);
    while((h<=mid)&&(j<=high)){
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
void mergesort(int low , int high, vector<int>&a){
    if(low < high){
        int mid = low + (high - low) / 2;
        mergesort(low, mid, a);
        mergesort(mid+1, high,a);
        merge(low, mid, high, a);
    }
}
int main(){
    int n;
    cout << "enter the size of the array"<<endl;
    cin >> n;
    vector<int> a(n);
    srand(time(0));
    cout << "random array is : ";
    for(int i=0; i<n; i++){
        a[i] = rand() % 1000;
        cout << a[i] << " ";
    } 
    cout << endl;

    auto start = chrono::high_resolution_clock::now();
    mergesort(0, n-1,a);
    auto stop = chrono::high_resolution_clock::now();

    chrono::duration<double, milli>elapsed = stop - start;
    cout << "sorted array is : ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "time complexity is : " << elapsed.count() << endl;
    return 0;
}