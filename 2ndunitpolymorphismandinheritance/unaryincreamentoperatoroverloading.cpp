#include<iostream>
using namespace std;
class A {
    public:
    int a;
    void getdata () {
        cout<<"\n Enter the number:";
        cin>>a;
    }
    void putdata () {
        cout<<"\n the value of a is:"<<a<<endl;
    }
    void operator ++ () {
        a = a+1;
        //a++;
        cout<<"the value of a after increment is: "<<a;
    }
};

int main () {
    A obj;
    obj. getdata ();
    cout<<"\n original value:";
    obj. putdata ();
    ++obj;
    return 0;
}