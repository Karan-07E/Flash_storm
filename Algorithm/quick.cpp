#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>

using namespace std;

int partition(int low, int high, vector<int> &a){
    int i = low - 1;
    int pivot = a[high];
    for(int j=low; j<high; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}
void quicksort(int low, int high, vector<int>& a){
    if(low < high){
        int pivotIndex = partition(low, high, a);
        quicksort(low, pivotIndex-1, a);
        quicksort(pivotIndex+1, high, a);
    }
}
int main(){
    int n;
    cout << "enter the size of the array :"<< endl;
    cin >> n;
    vector<int> a(n);
    srand(time(0));
    cout << "random numbers are : ";
    for(int i=0; i<n; i++){
        a[i] = rand() % 1000;
        cout << a[i] << " ";
    }
    cout << endl;
    auto start = chrono::high_resolution_clock::now();
    quicksort(0, n-1, a);
    auto stop = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> elapsed = stop - start;
    cout << "sorted array is : ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "time complexity is : " << elapsed.count() << endl;
    return 0;
}