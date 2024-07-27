#include <iostream>
using namespace std;

int num(int n){
    int count=0;
    while(n>0){
        count+=1;
        n=n/10;
    }
    return count;
}
int main(){
    int res;
    int n;
    cin>>n;
    res=num(n);
    cout<<res<<endl;
}