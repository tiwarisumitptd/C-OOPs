#include <fstream>
#include <iostream>
using namespace std;
int main () {
    ofstream outfile ("f1.txt", ios::out | ios::trunc);
    if (outfile. is_open ()) {
        cout << "File opened successfully for writing." << endl;
        outfile << "This is a test file." << endl;
        outfile. close ();
    } 
    else {
        cout << "Failed to open file for writing." << endl;
    }
    return 0;
}