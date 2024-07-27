#include <iostream>
using namespace std;

int main(){
    int num=4;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(i==0 || j==0 || i==6 || j==6)
            cout<<num<<" ";
            else if(i==1 || j==1 || i==5 || j==5) 
            cout<<num-1<<" ";
            else if(i==2 || j==2 || i==4 || j==4) 
            cout<<num-2<<" ";
            else
            cout<<num-3<<" ";
        }
        cout<<endl;
    }
}