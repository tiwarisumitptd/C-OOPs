#include<iostream>
using namespace std;
class outer {
  private:
  int a;
  int b;
  public:
  void input () {
      cout<<"Enter the value of a and b is:";
      cin>>a>>b;
  } 

  class nested {
    public:
    int c;
    int d;
    void getdata () {
        cout<<"Enter the value of c and d is:";
        cin>>c>>d;
    }
    void add () {
      cout<<"the addition of c, d is:"<< c+d;
    }
  };
};

int main () {
    outer o;
    o. input ();
    outer:: nested obj;
    obj. getdata ();
    obj. add ();
    return 0;
}