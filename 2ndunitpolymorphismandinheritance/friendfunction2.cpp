#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void input () {
       cout<<"enter a number as a value:";
       cin>>a;
    }
    friend void max (A, B);
};
class B {
   int b;
   public:
   void getdata () {
    cout<<"Enter a number as b value:";
    cin>>b;
   }
   friend void max (A, B);
};
void max (A aa, B bb) {
    if (aa. a > bb. b){
        cout<<"the maximum number between a and b is a:"<<aa. a;
    }
    else {
        cout<<"the maximum number between a and b is b:"<<bb.b;
    }
}
int main () {
    A aa;
    B bb;
    aa. input ();
    bb. getdata ();
    max (aa, bb);
    return 0;
}