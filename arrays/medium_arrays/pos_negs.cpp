#include <iostream>
#include <vector>

using namespace std;

int posneg(vector<int> &arr, int n){
    vector<int> res(n,0);
    int pos = 0, neg = 1;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            res[neg] = arr[i];
            neg += 2;
        }
        else{
            res[pos] = arr[i];
            pos+=2;
        }
    }
    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }
    return 0;
}

int posneg1(vector<int> &arr, int n){
    vector<int>pos;
    vector<int>neg;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    if(pos.size() < neg.size()){
    for(int i=0;i<pos.size();i++){
      
      arr[2*i] = pos[i];
      arr[2*i+1] = neg[i];
    }

    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        arr[index] = neg[i];
        index++;
    }
  }
  else{
      for(int i=0;i<neg.size();i++){   
      arr[2*i] = pos[i];
      arr[2*i+1] = neg[i];
  }
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        arr[index] = pos[i];
        index++;
    }
  }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    posneg(arr, n);         //variety 1
    cout << endl;
    posneg1(arr, n);        //variety 2
    cout << endl;
    return 0;
}