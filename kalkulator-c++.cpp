#include <iostream>
using namespace std;

int tambah(int a,int b){
	return a + b;
}

int kurang(int a,int b){
	return a - b;
}

int kali(int a,int b){
	return a * b;
}

int bagi(int a,int b){
	return a / b;
}

int main(){

	int a,b,hasil;
	char pilih;

	cout << "=========KALKULATOR C++ SEDERHANA==========\n" << endl;

	// input angka
	cout <<"input angka: ";
	cin>> a;
	cout <<"input angka: ";
	cin>> b;

	// pilih operator
	cout << "pilih operator ( + - * / ) ?  ";
	cin >> pilih,pilih2;
	do{

	if (pilih == '+'){
		cout << a << " + " << b << " = " << tambah(a,b) << endl;
	}
	else if (pilih == '-'){
		cout << a << " - " << b << " = " << kurang(a,b) << endl;
	}
	else if (pilih == '*'){
		cout << a << " * " << b << " = " << kali(a,b) << endl;
	}
	else if (pilih == '/'){
		cout << a << " / " << b << " = " << bagi(a,b) << endl;
	}
	else{
		cout << "operator yang anda masukan salah!!!" << endl;
	}

	//lanjut / exit

	cout << "lanjut y/n ? "
	cin >> pilih2;
}while()



}