#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	public:
		string nama;
		string NIM;
		string jurusan;
		double IPK;
		
};

int main (){
	Mahasiswa data1;
	data1.nama = "steve";
	data1.NIM = "0111";
	data1.jurusan = "Ternak lele";
	data1.IPK = 3;
	
	Mahasiswa data2;
	data2.nama = "fox";
	
	cout << "Nama dari data 1: " << data1.nama << endl;
	cout << "NIM dari data 1: " << data1.NIM << endl;
	cout << "Jurusan dari data 1: " << data1.jurusan << endl;
	cout << "IPK dari data 1: " << data1.IPK << endl;
	
	cout << "Nama dari data 2: " << data2.nama << endl;
	return 0;
}
