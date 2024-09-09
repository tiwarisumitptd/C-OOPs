#include<iostream>
using namespace std;
class cn {
    public:
    int a;
    cn () {
      a = 30;
    }
    void operator + () {
        if (+a>10);
        cout<<"a is positive";
    }
};

int main () {
    cn obj;
    +obj;
    return 0;
}