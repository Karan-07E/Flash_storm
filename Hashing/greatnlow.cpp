#include <iostream>
using namespace std;

void countfreq(int arr[], int n){
    int hash[20]={0};
    int maxele=arr[0], minele=arr[0];
    int maxfreq=hash[arr[0]], minfreq=hash[arr[0]];
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    for(int j=0; j<n; j++){
        if(hash[arr[j]]>maxfreq) 
        {
        maxfreq=hash[arr[j]];
        maxele=arr[j];
        }
        if(hash[arr[j]]<minfreq) {
            minfreq=hash[arr[j]];
            minele=arr[j];
        }
    }
    cout << "the greatest frequency element in the array is : " <<maxele<<endl;
    cout << "the lowest frequency element in the array is : " <<minele<<endl;
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


