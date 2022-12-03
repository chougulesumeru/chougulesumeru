// classes with parameter

#include<iostream>
using namespace std;

class Phone
{
    public:

    int  phoneId(int Id);
   
};

int  Phone::phoneId(int Id)
{
   
    return Id;
    
}

int main()
{
    Phone note;
   cout << "my phone Id is :-" << note.phoneId(37) << endl;

    return 0;
}