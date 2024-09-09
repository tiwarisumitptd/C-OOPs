#include<iostream>
using namespace std;

class A {
    protected:
    int a;
    int b;
    public:
    void getdata () {
        cout<<"Enter a value: ";
        cin>>a;
    }
    void input () {
        cout<<endl<<"Enter b value: ";
        cin >> b;
    }
};

class B: public virtual A {
    public:
    void multiplication () {
        cout<<"multiplication of a and b is:";
        cout<<a*b<<endl;
    }
};

class C: public virtual A {
    public:
    void addition () {
        cout<<endl<<"Addition is: ";
        cout<<a+b<<endl;
    }
};

class D: public B, public C {
        public:
        int s;
        void subtraction () {
            cout<<"subtraction of a and b is:";
            cout<<a-b;
        }
};

int main () {
    D obj;
    obj. getdata ();
    obj. input ();
    obj. addition ();
    obj. multiplication ();
    obj. subtraction ();
    return 0;
}