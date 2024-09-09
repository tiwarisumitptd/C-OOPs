#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int year;
    void display () {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main () {
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2020;
    Car* carPtr = &car1;
    carPtr->display (); 
    carPtr->brand = "Honda";
    carPtr->year = 2022;
    carPtr->display (); 
    Car* carPtr2 = new Car;
    carPtr2->brand = "Ford";
    carPtr2->year = 2023;
    carPtr2->display (); 
    return 0;
}