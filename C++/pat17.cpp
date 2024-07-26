#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){

        for(int j=0; j<5-i-1; j++){
            cout << " ";
        }
        int breakpt = (2*i+1)/2;
        char ch='A';
        for(int j=1; j<=(2*i+1); j++){
            cout<<ch;
            if(j<=breakpt){
                ch++;
            }
            else
            ch--;
            }
            cout<<endl;
        }
    }
