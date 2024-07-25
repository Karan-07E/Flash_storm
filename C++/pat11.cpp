#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            if((i+j)%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;
    }
}
