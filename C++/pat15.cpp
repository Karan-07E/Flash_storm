#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(char ch='A'; ch<='E'-i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}