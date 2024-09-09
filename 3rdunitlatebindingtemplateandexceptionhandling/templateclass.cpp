#include<iostream>
using namespace std;
template <class T> class A {
    T b;
    public:
    void input () {
        cout<<"Enter value of a is: ";
        cin>>b;
    }
    void putdata () {
        cout<<"value of a is: "<<b <<endl;
    }
};

int main () {
    A <char> b_char;
    A <float > b_float;
    A <int> b_int;
    b_int. input ();
    b_int. putdata ();
    b_char. input ();
    b_char. putdata ();
    return 0;
}