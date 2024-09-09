#include<iostream>
using namespace std;

class A {
    public:
    int a;
    int b;
    virtual void output () {
        cout<<"welcome in class A:";
    }
};
class B: public A {
    public:
    void output () override {
        cout<<"welcome in input function for learn virtual function concept"<<endl;
    }
};

class C: public A {
    public:
    void output () override {
        cout<<"Hii i am override function"<<endl;
    }
};

int main () {
    A *ptr;
    B obj1;
    C obj2;
    ptr = &obj2;
    ptr->output ();
    ptr = &obj1;
    ptr->output ();
    return 0;
}