#include<iostream> 
using namespace std;
class test {
    private:
    int n = 10;// class data member
    public:
    void show () {
        cout<<"The value of n:"<<n<<endl;
    }
};

int main () {
    test obj1, obj2; //Declaring object
    obj1.show();
    obj2.show();
    return 0;
}
