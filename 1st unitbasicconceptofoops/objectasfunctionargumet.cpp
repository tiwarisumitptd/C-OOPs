#include<iostream>
using namespace std;
class time {
    public:
    int h;
    int m;
    void getdata () {
        cout<<"Enter the value of hour:"<<endl;
        cin>>h;
        cout<<"Enter the value of minute:"<<endl;
        cin>>m;
    }
    void putdata (time t1, time t2) {
        cout<<"hour is:"<<h<<endl;
        cout<<"minutes is:"<<m<<endl;
    }
    void sum (time t1, time t2) {
         h = (t1.h + t2.h) / 60;
         m = (t1.m + t2.m) % 60;
         h = h+(t1.h + t2.h);
    }
};

int main () {
    time t1;
    time t2;
    time t3;
    t1. getdata ();
    t2. getdata ();
    t3. sum (t1, t2);
    t1. putdata (t1, t2);
    t2. putdata (t1, t2);
    t3. putdata (t1, t2);
    return 0;
}