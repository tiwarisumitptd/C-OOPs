#include<iostream>
using namespace std;
template<typename T> T product (T x, T y) {
    return x*y;
}

int main () {
    cout<<"the multiplication of two integer number is: ";
    cout<< product < int > (3, 4) <<endl;
    cout<<"the multiplication of two float number is: ";
    cout<< product <float > (6.78, 8.40) <<endl;
    cout<<"the multiplication of two bool number is: ";
    cout<< product <bool> (1, 0) <<endl;
    cout<<"the multiplication of two char number is: ";
    cout<<product <char> ('e', 'd');
    return 0;
}