#include<iostream>
using namespace std;
class base {
    public:
    int m;
    int n;
    void getdata () {
        cout<<"Enter the value of m and n: ";
        cin >> m>>n;
    } 
};

class derived : public base {
    public:
    void addition () {
        cout<< "the addition of m and n is: ";
        cout<< m + n;
    }
};

int main () {
    base *ptr;
    derived obj;
    ptr = &obj;
    ptr -> getdata ();
    obj. addition ();
    return 0;
}