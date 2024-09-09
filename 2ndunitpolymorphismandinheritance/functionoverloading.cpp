#include<iostream>
using namespace std;

class cn {
public:
   void add () {
    cout<<"welcome\n";
   }
   void add (int a) {
    cout<<"value of a is:"<<a<<endl;
   }
   void add (int a, int b) {
    cout<<"addition of a and b is:"<<a+b<<endl;
   }
   void add (int a, int b, int c) {
    cout<<"addition of a, b and c is:"<<a+b+c<<endl;
   }
   void add (float a, int b) {
    cout<<"addition of a and b is:";
    int x = a+b;
    cout<<x;
   }
};

int main () {
    cn obj;
    obj. add ();
    obj. add (3);
    obj. add (2,4);
    obj. add (5, 6, 7);
    return 0;
}