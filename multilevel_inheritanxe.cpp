// multilevel inheritance in c++
// a class can also be derived from one class, which is already derived from another class

class myClass
{
     public:

     void myFunction()
     {
        cout<< " there is osme content in parent class"; 
     }
     
};



class myChild: public myClass{

};

class myGrandChild: public myChild{

};

int main()
{
    myGrandChild note;
    note.myfunction();

    return 0;
}