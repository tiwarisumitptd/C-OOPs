#include<iostream>
using namespace std;
int count = 0;
class cn {
    public:
    cn () {
        count++;
        cout<<"\n no of object created";
    }
    ~cn () {
        count--;
        cout<<"\n no of object destroyed";
    }
};
int main () {
    cn aa;
    cn bb;
    return 0;
}