#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
    public:
        Hero(const char* name = "hero", double health = 125){
            this->name = name;
            this->health = health;
        }
        void display(){
            cout << "Hero name:\t" << this->name << endl;
            cout << "Hero health:\t" << this->health << endl;
        }
};

int main(){
    Hero* hero1 = new Hero ("naruto", 150);
    hero1->display();

    Hero hero2 = Hero();
    hero2.display();
    return 0;
}