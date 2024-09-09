#include<iostream>
using namespace std;
    class cn {
      public:
      int a;
      int b;
      int c;
      int d;
      void input () {
        cout<<"enter a, b, c, d value:";
        cin >>a >>b >> c >>d;
      }
      void output () {
        cout<< "the multiplication of a, b, c and d is: ";
        cout << a*b*c*d;
      }
};
int main () {
    cn obj;
    obj. input ();
    obj. output ();
    return 0;
}