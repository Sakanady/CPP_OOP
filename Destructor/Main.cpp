#include <iostream>
#include <string>

using namespace std;

class Player{
	public:
		string nama;
		
		Player(const char* nama){
			Player::nama = nama;
			cout << Player::nama << " dibuat" << endl;
		}
		~Player(){
			cout << Player::nama << " dihapus" << endl;
		}
};

int main(){
	Player stackPlayer = Player("Stack");
	
	Player* heapPlayer = new Player("Heap");
	delete heapPlayer;
	return 0;
}
