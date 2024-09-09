#include<iostream>
using namespace std;
class cn {
    public:
    int a;
    cn () {
        a=10;
    }
   cn (cn &z) {
    a = z.a;
   }    
   void putdata () {
    cout<<"the value of a is:"<<a<<endl;
   }
};
int main () {
    cn obj;
    cn obj1(obj);
    cn obj2 = obj1;
    obj. putdata ();
    obj1.putdata();
    obj2.putdata();
    return 0;
}