// ploymorphism in c++
// poly means many forms

#include<iostream>
using namespace std;

class Animal
{
    public:

    void animalSound()
    {
        cout << " first animal make a sound" <<endl; 
    }
};

class Lion : public Animal{
    public:

    void animalSound()
    {
        cout << " lion make a roar in jungle" << endl;
    }
};

class Dog: public Animal{
    public:

    void animalSound()
    {
          cout << " dog also make a sound" << endl;
    }

};

int main()
{
    Animal note;
    Lion note1;
    Dog note2;

    note.animalSound();
    note1.animalSound();
    note2.animalSound();

    return 0;
    
}