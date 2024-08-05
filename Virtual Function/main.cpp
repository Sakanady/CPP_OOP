#include <iostream>

using namespace std;

class Instrument{ 
    public:
        virtual void makeSound(){ //virtual function
            cout << "Instrument playing..." << endl;
        }
};

class Piano: public Instrument{
    public:
    void makeSound(){
        cout << "Piano playing" << endl;

    }
};

class Hero{
    public:
        virtual void weapon() = 0 ;//pure virtual function
};

class Hunter: public Hero{
    public:
        void weapon(){
            cout << "Hunter using bow" << endl;
        }
};

int main(int argc, char const *argv[])
{
    Piano *a1 = new Piano();
    a1->makeSound();
    Hunter *h1 = new Hunter();
    h1->weapon();
    return 0;
}
