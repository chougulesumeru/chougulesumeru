// constructors in cpp with classes

#include <iostream>
using namespace std;

class Car
{

public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z);
};

Car::Car(string x, string y, int z)
{

    brand = x;
    model = y;

    year = z;
}

int main()
{
    Car note("Audi", "Q7", 2002);

    cout << " the brand of the car is :-" << note.brand << endl;
    cout << " the model of the car is :-" << note.model << endl;
    cout << " the purchased year of the car is :- " << note.year << endl;

    return 0;
}