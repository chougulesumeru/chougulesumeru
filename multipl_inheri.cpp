// multiple inheritance in c++ 
// inherate multiple class from base class separated by comma 

#include<iostream>
using namespace std;

class Mobile
{
    public:

    void function()
    {
        cout << " there is a some content in function" << endl;
    }
};

class Tab
{
    public: 

    void function2()
    {
        cout << "there is another content in function 2" << endl;
    }
};

class Accesaries: public Mobile, public Tab
{
      
};

int main()
{
    Accesaries note;

    note.function();
    note.function2();

    return 0;
}