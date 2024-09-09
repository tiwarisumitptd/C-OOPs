#include<iostream>
using namespace std;
class A {
    public:
    int a;
    void input () {
        cout<<"Enter a number: \n";
        cin>>a;
    }
    void output (A obj1) {
        cout<<"the value of a is:";
        cout<< obj1.a<<endl;
    }
};

int main () {
    A obj, obj1;
    obj. input ();
    obj. output (obj);
    obj1.input ();
    obj1.output (obj1);
    return 0;
}