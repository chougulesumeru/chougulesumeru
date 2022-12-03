// inheritance in c++
// we can inherite in class from one another

#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand = "S-cross";

    void name()
    {
        cout << " the car name is S-cross \n";
    }
};

class Car : public Vehicle
{
public:
    string model = "Q7";
};

int main()
{
    Car note;
    cout << " the car name is " << note.brand << " and model is " << note.model << endl;
}