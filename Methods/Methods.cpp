#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
	public:
		string nama;
		double IPK;
		
		Mahasiswa(string inputNama, double inputIPK){
			Mahasiswa::nama = inputNama;
			Mahasiswa::IPK = inputIPK;
		}
		
		void tampilkanData(){
			cout << "Nama\t: "<< Mahasiswa::nama << endl;
			cout << "IPK\t: "<< IPK << endl;
		}
		
		void ubahNama(string namaBaru){
			Mahasiswa::nama = namaBaru;
		}
		
		string getNama(){
			return Mahasiswa::nama;
		}
		double  getIPK(){
			return Mahasiswa::IPK;
		}
		
		double katrolIPK (const double &tambahNilai){
			return Mahasiswa::IPK + tambahNilai;
		}
};

main (){
	Mahasiswa data1 = Mahasiswa("Steve", 1.5);
	data1.tampilkanData();
	data1.ubahNama("fox");
	data1.tampilkanData();
	
	string dataNama = data1.getNama();
	
	cout << "dataNama = "<< dataNama << endl;
	cout << "dataIPK = " << data1.getIPK() << endl;
	cout << "katrolIPK = " << data1.katrolIPK(2.2);
	return 0;
}
