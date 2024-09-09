#include<iostream>
using namespace std;
class cn {
    public:
    int a;
    int b;
    void getdata () {
        cout<<"Enter the value:\n";
        cin>>a;
    }
    void putdata () {
        cout<<"the value is:";
        cout<<a;
        cout<<endl;
    }
    cn operator + (cn bb) {
        cn cc;
        cc. a = a + bb. a;
        return cc;
    }
};

int main () {
    cn obj1, obj2, obj3;
    obj1. getdata ();
    obj2. getdata ();
    obj3 = obj1 + obj2;
    obj1. putdata ();
    obj2. putdata ();
    obj3. putdata ();
    return 0;
}