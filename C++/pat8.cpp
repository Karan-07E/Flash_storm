#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for(int k=0; k<10-(2*i+1); k++)
        {
            cout<<"*";
        }
    cout<<endl;
}
}