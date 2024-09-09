#include <fstream>
#include <iostream>
using namespace std;

int main () 
{
    const char* filename = "f3.bin";
    char warr [45] = {"Hello world"};
    size_t dataSize = sizeof (warr);
    ofstream outfile (filename, ios::binary);
    if (! outfile. is_open ()) {
        cout << "Unable to open file for writing" << endl;
        return 1;
    }
    outfile. write (warr, dataSize);
    outfile. close ();
    char readdata [dataSize];
    ifstream infile (filename, ios::binary);
    if (! infile. is_open ()) 
       {
        cout << "Unable to open file for reading" << endl;
        return 1;
    }
    infile. read (readdata, dataSize);
    streamsize bytesRead = infile. gcount ();
    infile. close ();
    cout << "Read " << bytesRead << " bytes from the file." << endl;
    cout << "Data: ";
    for (streamsize i = 0; i < bytesRead; ++i) {
        cout << readdata[i];
    }
    cout << endl;
    return 0;
}