#include <iostream>

using namespace std;

class Hero{
    private:
        string name;
        int level;
    public:
        Hero(const char* name){
            this->name = name;
            this->level = 0;
        }
        string getName(){
            return this->name;
        }
        void display(){
            cout << "Channel Name\t: " << this->name << endl;
            cout << "Follower\t: " << this->level << endl;
        }
        void levelUp(){
            this->level++;
        }
};

class SwordMan:public Hero{
    public:
        SwordMan(const char* name):Hero(name){

        }
        void useSword(){
            cout << getName() << " Menggunakan Pedang" << endl;
        }
};

int main(int argc, char const *argv[]){
    SwordMan hero1 = SwordMan("hero 1");
    hero1.display();
    hero1.useSword();
    return 0;
}
