// c++ Encapsulation 

#include<iostream>
using namespace std;

class Employee
{
    private:

    int salary;

    public:

    int setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee note;

    cout << "the salary of the Employee is :-" << note.setSalary(400000) << endl;
    cout << note.getSalary();
}