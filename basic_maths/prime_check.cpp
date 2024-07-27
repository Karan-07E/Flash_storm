#include <iostream>
using namespace std;

int prime(int num){
    if( num % 2 == 0)
      return true;
    return false;
}
int main(){
    int num;
    cin>>num;
    if(prime(num)){
        cout<<num<<" is prime "<<endl;
    }
    else
        cout<<num<<" is not prime "<<endl;
}