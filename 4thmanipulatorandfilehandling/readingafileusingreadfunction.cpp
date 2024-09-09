#include <fstream>
#include <iostream>
using namespace std;

int main () {
    ifstream inFile ("f1.bin", ios::binary);
    if (! inFile. is_open ()) {
        cout << "Unable to open file!" << endl;
        return 1;
    }
    char arr [100];
    inFile. read (arr, sizeof(arr));
    streamsize bytesRead = inFile. gcount ();
    inFile.close();
    cout << "Read " << bytesRead << " bytes from the file." << endl;
    cout << "Data: ";
    for (streamsize i = 0; i < bytesRead; ++i) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}