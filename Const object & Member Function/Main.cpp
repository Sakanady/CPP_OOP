#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
    public:
        Hero(const char * name){
            this->name = name;
        }
        void display()const{
            cout << "Name: " << this->name << endl;
        }
};

int main(){
    Hero hero1 = Hero("Hero1");
    hero1.display();
    const Hero hero2 = Hero("Hero2"); //objek bersifat const, tidak dapat diubah
    hero2.display();
    return 0;
}