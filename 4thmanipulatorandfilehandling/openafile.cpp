#include<iostream>
#include<fstream>
using namespace std;
int main () {
    string str;
    ifstream infile;
    infile. open ("f1.txt", ios::in);
    if (infile. is_open ()) {
        cout<<"File is opened";
    }
    else {
        cout<<"file is not opened";
    }
    infile. close ();
    return 0;
}