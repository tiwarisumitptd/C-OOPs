#include<iostream>
using namespace std;

class cn {
    public:
    int n;
    void input () {
        cout<<"\n enter value:";
        cin>>n;
    }
    void output () {
         cout<<"\n value is before decrement:"<< n<<endl;
    }
    void operator -- (int) {
         n = n-1;
         cout<<"the value of n is after decrement:"<<n;
    }
};

int main () {
    cn obj1, obj2;
    obj1.input ();
    obj1.output();
    obj1--;
    return 0;
}