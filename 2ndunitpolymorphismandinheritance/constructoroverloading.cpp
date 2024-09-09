#include<iostream>
using namespace std;
class cn {
   public:
   int a;
   int b;
   cn () {
    a = 20;
   }
   cn (int x) {
      a = x;
   }
   void output () {
   cout<<"the value of a is:";
   cout<<a;
   }
   cn (cn &z) {
     a = z.a;
   }
};

int main () {
    int m = 50;
    cn obj;
    cn obj2 (m);
    cn obj3 (obj2);
    obj2. output ();
    obj3. output ();
    obj. output ();
    return 0;
}