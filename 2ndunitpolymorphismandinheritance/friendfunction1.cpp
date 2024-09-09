#include<iostream>
using namespace std;
class cn {
    int a, b;
    public:
    void getdata () {
        cout<<"Enter a value:";
        cin>>a;
        cout<<"Enter b value:";
        cin>>b;
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
    }
    friend int sum (cn obj) {
    return obj. a + obj. b;
    }    
};

int main () {
    cn obj;
    obj.getdata ();
    cout<<"the addition of a and b is:"<<sum (obj);
    return 0;
}