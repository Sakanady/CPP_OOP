#include <iostream>
#include <string>

#include "PlayerHeader.h"

using namespace std;

int main(){
	Player* player1 = new Player("player 1");
	player1->display();
	cout << (*player1).disName() << endl;
	return 0;
}


