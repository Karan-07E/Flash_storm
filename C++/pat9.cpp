#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5-1-i; j++){
            cout<<" ";
        }
        for(int k=0; k<(2*i+1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=0; i<5; i++){
        for(int j=0;  j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<10-(2*i+1); k++){
            cout<<"*";
        }
        cout<<endl;
}
}