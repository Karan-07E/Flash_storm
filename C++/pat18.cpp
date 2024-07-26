#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(char ch =('A'+4)-i;ch<=('A'+4);ch++){
            cout<<ch;
        } 
        cout<<endl;
    }
}