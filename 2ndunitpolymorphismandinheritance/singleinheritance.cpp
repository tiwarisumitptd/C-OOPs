#include<iostream>
using namespace std;

class A {
    protected:
    int a;
    // private:
    // int a;
    public:
    void getdata () {
        cout<<"Enter value of a:";
        cin>>a;
    }
    // int geta () {
    //     return a; use when private member function access
    // }
};

class B: public A {
    private:
    int x;
    public:
    void input () {
        cout<<"Enter value of x:";
        cin>>x;
    }
    void output () {
        cout<<"the addition of a and x is:"<<a + x;// use geta () at the place of a when a is private
    } 
};

int main () {
    B obj;
    obj. getdata ();
    obj. input ();
    obj. output ();
    return 0;
}