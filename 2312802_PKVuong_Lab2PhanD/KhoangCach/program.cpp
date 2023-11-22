//Khai bao thu vien

#include <iostream>
#include <math.h>
using namespace std;


//Khai bao nguyen mau

double TinhKhoangCach(double xa, double ya, double xb, double yb);

//Ham main

int main() {

	double xa, ya, xb, yb, kc;

	cout << "Nhap hoanh do A : ";
	cin >> xa;
	cout << "Nhap tung do A : ";
	cin >> ya;
	cout << "Nhap hoanh do B : ";
	cin >> xb;
	cout << "Nhap tung do B : ";
	cin >> yb;

	kc = TinhKhoangCach(xa, ya, xb, yb);
	cout << "Khoang cach tu A den B = " << kc;

	return 0;
}

//Dinh nghia ham

double TinhKhoangCach(double xa, double ya, double xb, double yb) {
	return sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
}