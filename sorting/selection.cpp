#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){     
        int min=i;              
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
               min=j;             
            }
        }
        swap(arr[min], arr[i]);     //or using temp we can swap :)
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int j=0; j<n; j++){
    cin >> arr[j];
    }
    selection_sort(arr,n);
}