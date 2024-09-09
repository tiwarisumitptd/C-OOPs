#include<iostream>
using namespace std;
class C1 {
    public:
    int a;
    int b;
    C1 () {
      a=10;
      b=20;
    }
    void putdata () {
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b;
    }
};
int main () {
   C1 obj;
   obj. putdata ();
   return 0;
}