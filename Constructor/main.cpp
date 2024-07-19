#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	public:
		string nama;
		string NIM;
		string jurusan;
		double IPK;
		
		Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){//ini constructor = yg dipanggil pertama kali
			Mahasiswa::nama = inputNama;
			Mahasiswa::NIM = inputNIM;
			Mahasiswa::jurusan = inputJurusan;
			Mahasiswa::IPK = inputIPK;
			
			cout << "Nama: " << Mahasiswa::nama << endl;
			cout << "NIM: " << Mahasiswa::NIM << endl;
			cout << "Jurusan: " << Mahasiswa::jurusan << endl;
			cout << "IPK: " << Mahasiswa::IPK << endl;
		}
};

int main(){
	Mahasiswa data1 = Mahasiswa("Steve", "012345", "Ternak Lele", 3.0);
	
	return 0;
}
