#include <iostream>
using namespace std;

class cn {
private:
    int a;
public:
    cn (int value): a(value) {} 
    friend class FriendClass;
};

class FriendClass {
public:
    void b (cn &obj) {
        cout << "The value is: " << obj. a << endl;
    }
};

int main () {
    cn obj (34); 
    FriendClass friendObj;
    friendObj. b (obj);  
    return 0;
}