#include<iostream>
using namespace std;

class A {
    public:
    int a;
    void input () {
        cout<<"Enter a value: ";
        cin>>a;
    }
};

class B: public A {
   public:
   int b;
   void getdata () {
    cout<<"Enter the value of b is:";
    cin>>b;
   }
};

class C: public B {
    public:
    void add () {
    cout<<"the addition of a and b is:";
    cout<<a+b<<endl;
  }
};

int main () {
    C obj;
    obj. input ();
    obj. getdata ();
    obj.add ();
    return 0;
}