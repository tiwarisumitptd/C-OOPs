#include<iostream>
using namespace std;

class A {
    public:
    int a;
    void input () {
        cout<<"Enter a value: ";
        cin>>a;
    }
    int b;
   void getdata () {
    cout<<"Enter the value of b is:";
    cin>>b;
   }
};

class B: public A {
   public:
   void multiplication () {
    cout<<"the multiplication of a and b is:";
    cout<<a*b<< endl;
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
    obj. add ();
    obj. multiplication ();
    return 0;
}