#include <fstream>
#include <iostream>
using namespace std;
int main () {
    const char* filename = "f2.txt";
    {
        ofstream outfile(filename);
        if (! outfile) {
            cout << "Unable to open file for writing" << endl;
            return 1;
        }
        outfile << "Hello, World" << endl;
        outfile << "This is a test file." << endl;
        outfile << 123 << " " << 4.56 << endl;
        outfile. close ();
        cout << "Data written to file successfully." << endl;
    }
    {
        ifstream infile(filename);
        if (! infile) {
            cout << "Unable to open file for reading" << endl;
            return 1;
        }
        string str;
        while (getline (infile, str)) {
            cout << str << endl;
        }
        infile. close ();
    }
    return 0;
}