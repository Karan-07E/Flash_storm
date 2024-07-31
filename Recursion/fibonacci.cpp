#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << '0';
    }
    if(n == 1){
        cout << "0" <<" "<<"1";
    }
    int fibo[n];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2; i<=n; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    for(int i=0; i<=n; i++){
        cout << " " << fibo[i];
    }
    return 0;
}