//Khai bao thu vien
#include <iostream>
using namespace std;

//Khai bao nguyen mau

double TinhChiSoBMI(double w, double h);

//Ham main
int main() {
	double w, h, chiSoBMI;
	cout << "Can nang : ";
	cin >> w;
	cout << "Chieu cao : ";
	cin >> h;
	chiSoBMI = TinhChiSoBMI(w, h);
	cout << "Chi so khoi co the: " << chiSoBMI;

	return 0;
}

//Dinh nghia ham

double TinhChiSoBMI(double w, double h ) {
	return w / (h * h);
}