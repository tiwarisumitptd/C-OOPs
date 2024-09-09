#include<iostream>
using namespace std;
class cn {
    public:
    int a;
    void getdata () {
        cout<<"Enter the value of a is:";
        cin>>a;
    }
    void putdata () {
        cout<<"a is:"<<a<<endl;
    }
};
int main () {
    cn arr [3];
    for (int i=0; i<3; i++) {
        arr[i]. getdata ();
    }
    for (int j=0; j<3; j++) {
        arr[j]. putdata ();
    }
    return 0;
}