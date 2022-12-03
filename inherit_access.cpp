// access specifiers in inheritance 

#include<iostream>
using namespace std; 

class Employee
{
    protected:      //access spaecifiers

    int salary;
};

class Programmer: public Employee{
    public:

    int bonus;

    void setSalary(double s)
    {
        salary=s;
    }

    int gatSalary()
    {
        return salary; 
    }
};

int main()
{
    Programmer note;

    
    note.bonus=2000;
    note.setSalary(500000);

    cout << " the bonus is :- " << note.bonus << endl;

    return 0;

}