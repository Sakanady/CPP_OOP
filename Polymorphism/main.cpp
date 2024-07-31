#include <iostream>

using namespace std;

class Hero{
    private:
        string name;
        int level;
    protected:
        int strength;
    public:
        Hero(const char* name){
            this->name = name;
            this->level = 0;
            this->strength = 1;
        }
        string getName(){
            return this->name;
        }
        void display(){
            cout << "Channel Name\t: " << this->name << endl;
            cout << "Follower\t: " << this->level << endl;
            cout << "Strength\t: " << this->strength << endl;
        }
        void levelUp(){
            this->level++;
        }
        void practice(){
            cout << "Hero is practicing" << endl;
        }
};

class SwordMan:public Hero{
    public:
        SwordMan(const char* name):Hero(name){

        }
        void practice(){
            cout << getName() << " practice with sword" << endl;
            this->strength++;
        }
};

class Archer:public Hero{
    public:
        Archer(const char* name):Hero(name){

        }
        void practice(){
            cout << getName() << " practice with bow" << endl;
            this->strength;
        }
};

int main(int argc, char const *argv[]){
    SwordMan hero1 = SwordMan("hero 1");
    Archer hero2 = Archer("hero 2");
    hero1.practice();
    hero2.practice();
    return 0;
}
