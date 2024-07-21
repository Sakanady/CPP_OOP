#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	public:
		string namePublic;
		
		Mahasiswa (const char* name, const char* namePrivate){
			this->namePublic = name;
			this->namePrivate = namePrivate;
		}
		
		void showNamePrivate(){
			cout << "Nama Private: " << this->namePrivate;
		}
		
	private:
		string namePrivate;	
};

int main(){
	Mahasiswa* mahasiswa1 = new Mahasiswa("mahasiswa 1", "Mhs1");
	mahasiswa1->showNamePrivate();
	return 0;
}
