#include <iostream>
using namespace std;

int findgcd(int n1, int n2){
    for(int i=max(n1,n2); i>0; i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1; 
}
int main(){
    int n1, n2,gcd;
    cin>>n1>>n2;
    gcd=findgcd(n1,n2);
    cout<<"gcd is "<<gcd<<endl;
}