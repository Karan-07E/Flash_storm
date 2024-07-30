#include <iostream>
using namespace std;

void tunip(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    i+=1;
    tunip(i,n);
}
int main(){
    int n;
    cin>>n;
    tunip(0,n);
}