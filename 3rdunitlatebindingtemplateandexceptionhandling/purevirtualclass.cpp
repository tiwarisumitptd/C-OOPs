#include<iostream>
using namespace std;
class A {
    public:
    virtual void sum () = 0;
};
class B: public A {
    public:
    void sum () override {
        cout<<"function sum is pure virtual";
    }
};
int main () {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->sum ();
    return 0;
}