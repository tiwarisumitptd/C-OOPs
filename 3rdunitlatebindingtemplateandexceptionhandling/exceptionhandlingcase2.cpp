#include<iostream>
using namespace std;
int main () {
    int x;
    cout<<"Enter a value: ";
    cin>>x;
    try {
        if (x == 0) {
            throw (x);
        }
        if (x == 10) {
            throw ('x');
        }
        if (x = 100) {
            throw (5.5);
        }
    }
    catch (...) {
        cout<< "some error occurred";
    }
    return 0;
}