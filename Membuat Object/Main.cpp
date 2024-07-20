#include <iostream>
#include <string>

using namespace std;

class DenganConst{
	public:
		string data;
		DenganConst(const char* data){
			DenganConst::data = data;
		}
		
		void show (){
			cout << "Data: " << DenganConst::data << endl;
		}
};

class TanpaConst{
	public:
		string data;
	
		void show (){
			cout << "Data: " << TanpaConst::data << endl;
		}
};

int main(){
	//Cara 1
	TanpaConst data1;
	data1.data = "data 1";
	data1.show();
	
	//Cara 2
	DenganConst data2 = DenganConst("data 2");
	data2.show();
	
	//Cara 3
	DenganConst data3("data 3");
	data3.show();
	
	//Cara 4
	DenganConst *data4 = new DenganConst("data 4");
	(*data4).show();
	data4->show();
	
	DenganConst* data5;
	data5 = new DenganConst("data 5");
	(*data5).show();
	
	
	return 0;
}
