#include <iostream>
using namespace std;
int fac=1;
int fact(int n){
    if(n==0){ 
    return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}