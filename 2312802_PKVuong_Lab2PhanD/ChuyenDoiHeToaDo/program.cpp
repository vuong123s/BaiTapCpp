//Khai bao thu vien

#include <iostream>
#include <math.h>
using namespace std;//Khai bao nguyen mau

double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h, double altitude);

//Ham main

int main() {
	double phi, delta, h, doCao, phuongVi;
	cout << "Nhap phi: ";
	cin >> phi;
	cout << "Nhap delta: ";
	cin >> delta;
	cout << "Nhap do cao: ";
	cin >> h;
	doCao = TinhDoCao(phi, delta, h);
	phuongVi = TinhPhuongVi(phi, delta, h, doCao);
	cout << "Do Cao: " << doCao;
	cout << "Phuong Vi: " << phuongVi;
	return 0;
}

//Dinh nghia ham
double TinhDoCao(double phi, double delta, double h) {
	return asin(sin(phi) * sin (delta) + cos (phi) * cos (delta) * cos (h));
	
}
double TinhPhuongVi(double phi, double delta, double h, double altitude) {
	return acos((cos(phi) * sin(delta) - sin(phi) * cos(delta) * cos(h) / cos(altitude)));
	
}