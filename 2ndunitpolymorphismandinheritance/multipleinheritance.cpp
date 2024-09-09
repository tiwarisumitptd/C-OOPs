#include<iostream>
using namespace std;
class A {
    protected:
    int a;
    public:
    void getdata () {
        cout<<"Enter a value: ";
        cin>>a;
    }
};
class B {
    protected:
    int b;
    public:
    void input () {
        cout<<endl<<"Enter b value: ";
        cin >> b;
    }
};
class C: public A, public B {
    public:
    void addition () {
        cout<<endl<<"Addition is: ";
        cout<<a+b;
    }
};
int main () {
    C obj;
    obj. getdata ();
    obj. input ();
    obj. addition ();
    return 0;
}