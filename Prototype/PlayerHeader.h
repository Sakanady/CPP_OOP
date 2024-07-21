#include <string>

using namespace std; 

class Player {
	public:
		string name;
		
		Player (const char* name);
		void display();
		string disName();
};
