#include<iostream>
using namespace std;
class C1 {
    public:
    int a;
    int b;
    C1 (int m, int n) {
        a = m;
        b = n;
    }
    void putdata () {
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b;
    }
};
int main () {
    int a;
    cout<<"Enter value of a:";
    cin>>a;
    int b;
    cout<<"Enter value of b:";
    cin>>b;
    C1 obj (a, b);
    obj. putdata ();
    return 0;
}