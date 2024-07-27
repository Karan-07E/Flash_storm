#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(char ch ='E'-i;ch<='E'; ch++){
            cout<<ch;
        } 
        cout<<endl;
    }
}