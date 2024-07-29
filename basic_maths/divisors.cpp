#include <iostream>
using namespace std;

void divisor(int n){
    int i=1;
    for(i=1; i<=n; i++){
        if(n%i==0)
        cout << i << " ";
    }
}
int main(){
    int n;
    cin>>n;
    divisor(n);
}