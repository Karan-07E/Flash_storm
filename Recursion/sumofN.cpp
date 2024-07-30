#include <iostream>
using namespace std;
int s=0;
void sum(int n){
    for(int i=1; i<=n; i++){
        s+=i;
    }
    cout << s <<endl;
}
int main(){
    int n;
    cin>>n;
    sum(n);
}