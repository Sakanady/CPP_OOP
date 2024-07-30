#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
    public:
        static int count;

        Hero(const char* name, double health){
            this->name = name;
            this->health = health;
            count ++;
        }
        ~Hero(){
            count--;
            cout << this->name << " telah dihapus" << endl;
        }
        void display(){
            cout << "name\t: " << this->name << endl;
            cout << "health\t: " << this->health << endl;
        }
};

int Hero::count =0;

int main(int argc, char const *argv[]){
    Hero hero1 = Hero("hero1", 100);
    hero1.display();
    cout << hero1.count << endl;
    cout << Hero::count << endl;
    Hero hero2 = Hero("hero2", 50);
    hero2.display();
    cout << hero1.count << endl;
    cout << hero2.count << endl;
    cout << Hero::count << endl;
    Hero* hero3 = new Hero("hero3", 75);
    hero3->display();
    cout << hero3->count << endl;
    cout << Hero::count << endl;
    Hero* hero4 = new Hero("hero4", 65);
    hero4->display();
    cout << hero4->count << endl;
    cout << Hero::count << endl;

    delete hero3;
    cout << Hero::count << endl;

    return 0;
}
