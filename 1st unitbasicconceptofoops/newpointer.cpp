#include <iostream>
using namespace std;
class cn {
public:
    int a;
    cn (int a): a (a) {
        cout << "Constructor called with value: " << a << endl;
    }
};

int main () {
    int* intPtr = new int (42);
    int* intarr = new int [5];
    cn* objPtr = new cn (100);
    cn* objarr = new cn [3] {cn (1), cn (2), cn (3)};
    return 0;
}