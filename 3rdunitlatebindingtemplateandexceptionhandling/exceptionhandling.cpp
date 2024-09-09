#include<iostream>
using namespace std;
int main () {
    int a;
    int b;
    int c;
    cout<<"Enter the value of a and b is:";
    cin>>a >> b;
    try {
       if (b != 0) {
        c= a/b;
        cout<<"\n division is:"<<c;
       }
       else {
        throw (b);
       }
    }
    catch (int b) {
        cout<<"cannot divide by:" <<b;
    }
    return 0;
}