#include<iostream> 
using namespace std;   
class A 
{ 
public: 
    void print () { 
    cout<<" welcome early binding\n"; 
    } 
}; 
class B: public A 
{ 
public: 
    void print () { 
        cout<<"congratulations you learn the concept of early binding \n"; 
    } 
}; 
    
int main () 
{ 
    A *ptr;
    ptr = new B; 
    ptr-> print ();   
    return 0; 
}