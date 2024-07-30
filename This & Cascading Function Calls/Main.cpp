#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string namaDepan;
        string namaTengah;
        string namaBelakang;
    public:
        Player(){
            this->namaDepan = "depan";
            (*this).namaTengah = "tengan";
            Player::namaBelakang = "belakang";
        }
        Player& setDepan(const char * depan){
            this->namaDepan = depan;
            return *this;
        }
        Player& setTengah(const char* tengah){
            this->namaTengah = tengah;
            return *this;
        }
        Player& setBelakang (const char* belakang){
            this->namaBelakang = belakang;
            return *this;
        }
        void display(){
            cout << "Nama: " << this->namaDepan << " " << (*this).namaTengah << this->namaBelakang << endl;
        }
};

int main(int argc, char const *argv[]){
    Player* player1 = new Player();
    player1->display();

    //casecading function calls
    player1->setDepan("a").setTengah("b").setBelakang("c");
    player1->display();
    
    return 0;
}
