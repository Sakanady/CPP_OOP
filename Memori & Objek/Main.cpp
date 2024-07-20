#include <iostream>
#include <string>

using namespace std;

class Kosong{
	
};

class Isi{
	public:
		int data1;
		int data2;
};

class Mahasiswa{
	public:
		string nama;
		
		Mahasiswa (const char* nama){
			Mahasiswa::nama = nama;
		}
};

int main(){
	cout << "Alokasi class Kosong (byte): " <<sizeof(Kosong) << endl;
	cout << "Alokasi class Isi (byte): " <<sizeof(Isi) << endl;
	
	//Address Stack
	string a,b;
	Mahasiswa test("P");
	string c;
	cout << "\nAddress Stack" << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &test << endl;
	cout << &c<< endl;
	
	//Address Heap
	string d,e;
	Mahasiswa *test2 = new Mahasiswa("Q");
	string f;
	cout << "\nAddress Heap" << endl;
	cout << &d << endl;
	cout << &e << endl;
	cout << test2 << endl;
	cout << &f << endl;
	return 0;
}
