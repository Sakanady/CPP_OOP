#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string name;
        double attack;
        int level;
        int exp;
    public:
        Player(const char* name){
           this->name = name;
           this->level = 1;
           this->exp = 0;
           this->attack = 100; 
        }
    void display(){
        cout << "name: " << this->name << endl;
        cout << "level: " << this->level << endl;
        cout << "attack: " << this->attack << endl;
        cout << "exp: " << this->exp << endl;
    }

    string getName(){ //getter, membuat atribut menjadi read only
        return this->name;
    }
    
    void addExp(int inExp){//setter, melakukan write data pada class
        int expMax = 100;
        this->exp += inExp;

        if (this->exp > expMax){
            this->level++;
            int sisaExp = this->exp - expMax;
            this->exp = sisaExp;
            this->attack += 15;
        }
    }
};

int main(){
    Player* player1 = new Player("naruto");
    player1->display();
    player1->getName(); //implementasi getter
    player1->addExp(35); //implementasi setter
    player1->addExp(35);
    player1->addExp(35);
    player1->display();
    player1->addExp(35);
    player1->addExp(35);
    player1->display();
    player1->addExp(35);
    player1->display();
    return 0;

}
