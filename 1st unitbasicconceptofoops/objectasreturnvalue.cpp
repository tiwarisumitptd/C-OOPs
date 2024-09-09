#include <iostream>
using namespace std;

class cn {
public:
    int a;
    void input () {
        cout << "Enter a number, please: ";
        cin >> a;
    }
    int output (cn obj2) {
        cout << "The value of the object is: " << obj2.a << endl;
        return obj2.a + a;
    }
};

int main () {
    cn obj3;
    cn obj2;

    obj2.input();
    int result1 = obj2.output(obj2);

    obj3.input();
    int result2 = obj2.output(obj3);

    cout << "Sum of the two values: " << result1 + result2 << endl;

    return 0;
}