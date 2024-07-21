#include <iostream>
#include <string>

using namespace std;

//Data Member
class ClassTypes{
	public:
		string dataStr;
		double dataDouble;
		
		ClassTypes(const char* dataStr, double dataDouble){
			ClassTypes::dataStr = dataStr; //Menggunakan Namespace
			
			cout << this << endl; //Menggunakan This = Pointer yang memeberikan addres dari objek
			this->dataDouble = dataDouble;
			cout << this->dataStr << endl;
			cout << ClassTypes::dataDouble << endl;
		}		
};
//Member function
class Player{
	public:
		string name;
		double power;
		int health;
		
		Player (const char* name, double power, int health){
			this->setName(name);
			this->setPower(power);
			this->setHealth(health);
			
			cout << this->name << endl;
			cout << this->power << endl;
			cout << this->health << endl;
		}
		
		void setName (const char* name){
			this->name = name;
		}
		
		void setPower (double power){
			this->power = power;
		}
		
		void setHealth(int health);
};

void Player::setHealth(int health){
	this->health = health;
}

int main(){
	ClassTypes* data1 = new ClassTypes ("data 1", 0.5);
	Player* player1 = new Player ("player 1", 10, 20);
	
	return 0;
}
