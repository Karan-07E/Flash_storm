#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are an adult" << endl;
    } else {
        cout << "You are not an adult" << endl;
    }

    return 0;
}
