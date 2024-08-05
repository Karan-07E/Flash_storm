#include <iostream>
using namespace std;

void countfreq(int arr[], int n){
    int hash[20]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    for(int j=0; j<n; j++){
        if(hash[arr[j]]!=0)
        cout<<arr[j]<<" "<<hash[arr[j]]<<endl;
        hash[arr[j]]=0;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    countfreq(arr, n);
} 
