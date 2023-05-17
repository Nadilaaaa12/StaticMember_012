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

void angka::cetakData(){
	for(int i=1;i<=pangjang;i++){
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++){
		cout << " = "; cin >> arr[i];
	}
	cout<<endl;
}
