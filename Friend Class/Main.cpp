#include <iostream>
#include <string>

using namespace std;

class PersegiPanjang;

class Persegi{
    friend class PersegiPanjang;
    private:
        double sisi;

    public:
        Persegi(double sisi){
            this->sisi=sisi;
        }
        double luas(){
            return this->sisi*this->sisi;
        }
        bool lebihBesar(const PersegiPanjang &obj);
};

class PersegiPanjang{
    friend class Persegi;
    private:
        double panjang;
        double lebar;
    
    public:
        PersegiPanjang(double panjang, double lebar){
            this->panjang = panjang;
            this->lebar = lebar;
        }
        double luas(){
            return this->panjang*this->lebar;
        }
        double lebihBesar(const Persegi &obj){
            bool nilai = this->panjang>obj.sisi;
            return nilai;
        }
};

bool Persegi::lebihBesar(const PersegiPanjang& obj) {
    return this->sisi > obj.panjang;
}

int main(){
    Persegi persegi = Persegi(5);
    PersegiPanjang* kotak = new PersegiPanjang(5,4);

    cout << "Luas Persegi = " << persegi.luas() << endl;
    cout << "Luas Persegi Panjang = " << (*kotak).luas() << endl; 
    cout << persegi.lebihBesar((*kotak)) << endl;
    cout << (*kotak).lebihBesar(persegi) << endl;

    return 0;
}