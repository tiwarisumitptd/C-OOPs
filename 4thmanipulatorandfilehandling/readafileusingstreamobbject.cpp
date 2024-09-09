#include<iostream>
#include<fstream>
using namespace std;
int main () {
  string str;
  ifstream infile; 
  infile. open ("jsr.txt", ios::in); 

  if (infile. is_open ()) {
    while (getline (infile, str)) { 
      cout << str << endl; 
    }
    infile. close ();
  } 
  else {
    cout << "Unable to open file." << endl;
  }
  return 0;
}