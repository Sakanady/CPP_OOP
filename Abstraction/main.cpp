#include <iostream>

using namespace std;

class Hero{
    public:
        virtual void useWeapon() = 0;
};

class SwordMan:public Hero{
    public:
        void useWeapon(){
            cout << "Swordman use a sword" << endl;
        }
};

class Hunter:public Hero{
    public:
        void useWeapon(){
            cout << "Hunter use a bow" << endl;
        }
};


int main(int argc, char const *argv[])
{
    SwordMan * s1 = new SwordMan();
    Hunter * h1 = new Hunter();

    s1->useWeapon();
    h1->useWeapon();
    
    return 0;
}
