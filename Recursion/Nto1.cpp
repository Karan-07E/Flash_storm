#include <iostream>
using namespace std;

void speed(int n, int i){
    if(i>n) return;
    cout<<i<<endl;
    i++;
    speed(n,i);
}
int main(){
    int n;
    cin>>n;
    speed(n,0);
}