#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);//Constructor
	~angka(); //Destructor
	void cetakData();
	void isiData();
};
//Definisi member Functon
angka::angka(int i) { //Contructor
	panjang = 1;
	arr = new int[i];
	isiData();
}

angka::~angka(){ //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}
