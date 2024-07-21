#include <iostream>
#include <string>

#include "PlayerHeader.h"

using namespace std;


Player::Player(const char* name){
	this->name = name;
}

void Player::display(){
	cout << "Nama: " << this->name << endl;
}

string Player::disName(){
	return this->name;
}
