#include <iostream>
using namespace std;

int main(){
    int space=0;  //for upper part of the pattern
    for (int i=0; i<=5; i++){
        for(int j=1; j<=5-i; j++){
            cout<<"*";
        }
        for(int j=0; j<space; j++){
            cout<<" ";
        }
        for(int j=1; j<=5-i; j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    int spc=8;  // for lower part of the pattern
    for (int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<spc; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        spc-=2;
        cout<<endl;
    }
}  //this pattern is partially matched...