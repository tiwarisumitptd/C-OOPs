#include<iostream>
using namespace std;
class cn {
    public:
    int n;
    void input () {
       cout<<"Enter n value: ";
       cin>>n;  
    }
    void output () {
        if (n % 2 == 0) {
            cout<<"n is an even number";
        }
        else {
            cout<<"n is an odd number";
        }
    }
};
int main () {
    cn obj;
    obj. input ();
    obj. output ();
    return 0;
}