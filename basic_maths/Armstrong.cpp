#include <iostream>
using namespace std;

int arm(int n){
    int original = n;
    int rem=0, null=0;
    while(n>0){
     rem = n % 10;
     null = null + (rem * rem * rem);
     n = n / 10;
    }
    if(null == original) return 1;
  return 0;
}
int main(){
    int n;
    cin>>n;
    if (arm(n))
    {
        cout<<n<<" is an Armstrong number";
    }
    else
        cout<<n<<" is not an Armstrong number";
}