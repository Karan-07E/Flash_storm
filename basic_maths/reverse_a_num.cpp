#include <iostream>
using namespace std;

int rev(int n){
    int rev=0,rem;
    while(n>0){
        rem=n%10;
        rev=rem+(rev*10);
        n=n/10;
    }
    return rev;
}
int main(){
    int n,res;
    cin>>n;
    res=rev(n);
    cout << res << endl;
}