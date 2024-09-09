#include<iostream>
using namespace std;

class A {
    public:
    int age;
    char name [56];
    void input () {
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the name:";
        cin. ignore ();
        cin. getline (name, 56);
    }
};

class B: public A {
    public:
    int salary;
    void getdata () {
        cout<<"Enter the salary: ";
        cin>>salary;
    }
};

class C {
    public:
    int working_period;
    void setdata () {
        cout<<"Enter the working period: ";
        cin >>working_period;
    }
};

class D: public C, public B {
    public:
    char post [40];
    void takedata () {
        cout<<"Enter the name of post: ";
        cin. ignore ();
        cin. getline (post, 40);
    }
};

int main () {
    D obj;
    obj. input ();
    obj. getdata ();
    obj. setdata ();
    obj. takedata ();
    return 0;
}