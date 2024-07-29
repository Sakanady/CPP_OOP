#include <iostream>
#include <string>

using namespace std;

class IntelHero;

class StrengthHero{
    private:
        string name;
        double health;
    public:
        StrengthHero(const char * name){
            this->name = name;
            this->health = 100;
        }
        friend bool compare(const StrengthHero& hero1, const IntelHero& hero2);
        friend bool compare(const IntelHero& hero1, const StrengthHero& hero2);
};
class IntelHero{
    private:
        string name;
        double health;
    public:
        IntelHero(const char * name){
            this->name = name;
            this->health = 50;
        }
        friend bool compare(const StrengthHero& hero1, const IntelHero& hero2);
        friend bool compare(const IntelHero& hero1, const StrengthHero& hero2){
            cout << "Di dalam class" << endl;
            return hero1.health > hero2.health;
        }
};

bool compare(const StrengthHero& hero1, const IntelHero& hero2){
    cout << "Di luar class" << endl;
    return hero1.health > hero2.health;
}

int main(){
    StrengthHero * hero1 = new StrengthHero("hero1");
    IntelHero hero2 = IntelHero("hero2");
    cout << compare((*hero1), hero2) << endl;
    cout << compare(hero2, (*hero1))<< endl;
    return 0;
}